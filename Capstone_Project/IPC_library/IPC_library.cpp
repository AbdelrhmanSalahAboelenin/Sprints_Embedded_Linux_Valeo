#include "IPC_library.hpp"
     
//initializing the IPC_library instance.
IPC_library::IPC_library(const char* queueFileName, int queueKey) {
    key_t key = ftok(queueFileName, queueKey); // key to identify the queue 
    Msg_Id = msgget(key, 0666 | IPC_CREAT);    // Get the message queue ID using the ke
}

// Receive a message from the message queue
bool IPC_library::Receive_Message(std::string& message, bool block) {
    // Define the structure of the message buffer
    struct {
        long messageType;
        char messageText[100];
    } Message_Buffer;

    // Determine the flags for message reception (block or non-blocking)
    int flags = block ? 0 : IPC_NOWAIT;

    // Receive a message from the message queue
    if (msgrcv(Msg_Id, &Message_Buffer, sizeof(Message_Buffer), 1, flags) == -1) {
        return false; // No message received
    }
    // Copy the received message to the 'message' variable
    message = Message_Buffer.messageText;
    return true;
}

// Remove the queue
void IPC_library::Remove_Queue() {
    msgctl(Msg_Id, IPC_RMID, NULL); /* NULL = 'no flags' */
}

// Send a message to the message queue
bool IPC_library::Send_Message(const std::string& message) {
   // Define the structure of the message buffer
    struct {
        long messageType;
        char messageText[100];
    } Message_Buffer;

    Message_Buffer.messageType = 1;
    // Copy the message into the message buffer
    strncpy(Message_Buffer.messageText, message.c_str(), sizeof(Message_Buffer.messageText));

    // Send the message to the message queue
    if (msgsnd(Msg_Id, &Message_Buffer, sizeof(Message_Buffer), 0) == -1) {
        return false; // Message not sent
    }

    return true;
}


