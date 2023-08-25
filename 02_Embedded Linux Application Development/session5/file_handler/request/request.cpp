#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <semaphore.h>
#include <string>
#include <sys/shm.h>
#include "../logger/simpleLogger.h"


/* Define the shared memory file name*/
#define BackingFile "/my_shared_memory_file" 

/*Define the access permissions*/ 
#define AccessPerms 0644 

/* Define the size of the shared memory segment*/                     
#define ByteSize 1024    

/* Define the name of the semaphore*/    
#define SemaphoreName "/my_semaphore"       

/*Define the content to write to shared memory*/
#define MemContents "Hello, Shared Memory!"   

void report_and_exit(const char* msg) {
  perror(msg);
  exit(-1);
}


int main(int argc, char* argv[]) {

    LOG_TRACE << "this a trace message";
    
    LOG_DEBUG << "this a debug message";
    
    LOG_WARNING << "this a warning message";
    
    LOG_ERROR << "this a error message";
    
    LOG_FATAL << "this a fatal message";

    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <-r or -l>" << std::endl;
       // LOG_ERROR << "Usage: <-r or -l>";
        return -1;
    }
    
    /*buffer  to pass the path of file or directory */
    
    char message1[1024];
   
    strcpy(message1,argv[2]);

    std :: string message="";
    message=message1;
    if (strcmp(argv[1], "-r") == 0) {
        message = "0"+message;
        LOG_DEBUG << "argv= -r";
        
    } else if (strcmp(argv[1], "-l") == 0) {
        message = "1"+message;
        LOG_DEBUG << "argv= -l";
    } else {
        std::cerr << "Invalid argument. Please provide -r or -l." << std::endl;
         LOG_ERROR << "Invalid argument. Please provide -r or -l.";
        return -1;
    }

    /**************************************Named pipe********************************************************/
    
    const char* pipeName = "../my_pipe";
    
    /* read/write for user/group/others */
    mkfifo(pipeName, 0666);
    
    /* open as write-only */
    int fd = open(pipeName, O_CREAT | O_WRONLY); 
    
    if (fd < 0) return -1; // can't opening fifo for writing

    /*using .c_str() to convert string to const char* */
    write(fd, message.c_str(), message.length() + 1);

    /* close pipe */
    close(fd); 
    unlink(pipeName); /* unlink from the implementing file */
    //std::cout << "Value " << value << " sent to the pipe." << std::endl;

    sleep(3);

    /******************************************* shared memory *************************************************/
    
    fd = shm_open(BackingFile, O_RDWR, AccessPerms);  /* empty to begin */
    if (fd < 0) {report_and_exit("Can't get file descriptor...");
	LOG_ERROR << "Can't get file descriptor...";}
  
    /* get a pointer to memory */
    void* memptr = mmap(NULL,       /* let system pick where to put segment */
                        ByteSize,   /* how many bytes */
                        PROT_READ | PROT_WRITE, /* access protections */
                        MAP_SHARED, /* mapping visible to other processes */
                        fd,         /* file descriptor */
                        0);         /* offset: start at 1st byte */
    if ((void*) -1 == memptr) {report_and_exit("Can't access segment...");
	LOG_ERROR << "Can't access segment...";}
   
    /* create a semaphore for mutual exclusion */
    sem_t* semptr = sem_open(SemaphoreName, /* name */
                            O_CREAT,       /* create the semaphore */
                            AccessPerms,   /* protection perms */
                            0);            /* initial value */
    if (semptr == (void*) -1){ report_and_exit("sem_open");
    LOG_ERROR << "sem_open";}

    /* use semaphore waiting for the writer to increment it */
    if (!sem_wait(semptr)) { /* wait until semaphore != 0 */
        for (int i = 0; i < strlen(MemContents); i++)
            write(STDOUT_FILENO, static_cast<char*>(memptr) + i, 1); /* one byte at a time */
        sem_post(semptr);
    }

    
    /* cleanup */
    munmap(memptr, ByteSize);
    close(fd);
    sem_close(semptr);
    unlink(BackingFile);
    return 0;
}
