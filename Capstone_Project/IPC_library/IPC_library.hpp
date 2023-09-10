#ifndef IPC_LIBRARY_HPP
#define IPC_LIBRARY_HPP

#include <iostream>
#include <cstring>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h> 
class IPC_library {
public:

    //initializing the IPC_library instance.
    IPC_library(const char* queueFileName, int queueKey);

    // Receive a message from the message queue.
    bool Receive_Message(std::string& message, bool block = true);

    // Send a message to the message queue
    bool Send_Message(const std::string& message);

    // Remove the message queue
    void Remove_Queue();

private:
    int Msg_Id;
};

#endif // IPC_LIBRARY_HPP

