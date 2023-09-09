#include <gtest/gtest.h>
#include "../file_handler/fh.hpp"

// Test case for the LSCommand with a successful execution
TEST(CommandsTest, LSCommandSuccess)
{
    // Open shared memory and create memory pointer
    int fd = shm_open(BackingFile, O_RDWR | O_CREAT, AccessPerms);
     void *memptr = mmap(NULL, ByteSize, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    
    std::string message = "/home/abderlhman/Desktop/test";

    // Call the ls_command function and expect SUCCESS
    Error_t result = ls_command(message, memptr);
    EXPECT_EQ(result, SUCCESS);

   
}

// Test case for the LSCommand with a failure in popen
TEST(CommandsTest, LSCommandFailurePopen)
{
    // Open shared memory and create memory pointer
    int fd = shm_open(BackingFile, O_RDWR | O_CREAT, AccessPerms);
     void *memptr = mmap(NULL, ByteSize, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

     // Provide an invalid command to ls_command, expecting FAILED
    std::string message = "/home/abderlhman/Desktop/mai";
    Error_t result = ls_command("invalid_command", memptr);
    EXPECT_EQ(result, FAILED);

}

// Test case for the ReadCommand with a successful execution
TEST(CommandsTest, ReadCommandSuccess)
{
    // Open shared memory and create memory pointer
    int fd = shm_open(BackingFile, O_RDWR | O_CREAT, AccessPerms);
     void *memptr = mmap(NULL, ByteSize, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    std::string message = "/home/abderlhman/Desktop/test/test.txt"; 

    // Call the read_command function and expect SUCCESS
    Error_t result = read_command(message, memptr);
    EXPECT_EQ(result, SUCCESS);

}

// Test case for the ReadCommand with a failure in fopen
TEST(CommandsTest, ReadCommandFailureFopen)
{    
    // Open shared memory and create memory pointer
     int fd = shm_open(BackingFile, O_RDWR | O_CREAT, AccessPerms);
     void *memptr = mmap(NULL, ByteSize, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

    // Provide an invalid file path to read_command, expecting FAILED
    std::string message = "/home/abderlhman/Desktop/main/tt.txt"; 
    Error_t result = read_command(message, memptr);
    EXPECT_EQ(result, FAILED);
  
}

// Test case for the ReadCommand with a failure in stat
TEST(CommandsTest, ReadCommandFailureStat)
{
    // Open shared memory and create memory pointer
    int fd = shm_open(BackingFile, O_RDWR | O_CREAT, AccessPerms);
     void *memptr = mmap(NULL, ByteSize, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

    // Provide an invalid file path to read_command, expecting FAILED
    std::string message = "/home/abderlhman/Desktop/main/tt.txt"; 
    Error_t result = read_command(message, memptr);
    EXPECT_EQ(result, FAILED);
    
}

int main(int argc, char **argv)
{   
     // Initialize Google Test and run all test cases
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}