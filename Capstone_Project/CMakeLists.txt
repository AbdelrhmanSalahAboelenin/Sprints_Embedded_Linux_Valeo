cmake_minimum_required(VERSION 3.22)

# raspberry pi 4 compiler
#set(CMAKE_CXX_COMPILER "/home/abderlhman/x-tools/aarch64-rpi4-linux-gnu/bin/aarch64-rpi4-linux-gnu-g++")

project(capstone_linux_project)

# Find the Boost libraries
find_package(Boost REQUIRED COMPONENTS log log_setup system thread)

#adding directories
include_directories(${Boost_INCLUDE_DIRS})

#adding subdirectories
add_subdirectory( Math_Application )
add_subdirectory( Daemon_Logger )
add_subdirectory( IPC_library )
add_subdirectory( Logger_Receiver_App )


