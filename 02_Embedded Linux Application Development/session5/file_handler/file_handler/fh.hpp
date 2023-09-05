#ifndef FH_H_
#define FH_H_

#include <iostream>
#include <fstream>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/select.h>
#include <fcntl.h>
#include <unistd.h>
#include <semaphore.h>
#include <cstring>
#include <sys/epoll.h>
#include "../logger/simpleLogger.h"

// using namespace std;
#define BackingFile "/my_shared_memory_file" // File path for shared memory
#define AccessPerms 0644                     // File permission mode
#define ByteSize 1024                       // Size of shared memory segment
#define SemaphoreName "/my_semaphore"        // Name of the semaphore

// Enum for error codes
typedef enum {
    SUCCESS = 0,  // Successful operation
    FAILED,       // Generic failure
    READ_FILE,    // Read command type
    LIST          // List command type
} Error_t;

// Function to report an error and exit the program
void report_and_exit(const char *msg);

// Function prototypes for handling command operations
Error_t ls_command(std::string message, void *memptr);
Error_t read_command(std::string message, void *memptr);

#endif
