cmake_minimum_required(VERSION 3.22)

project(capstone_linux_project)

# For crosscompiler rpi4
set(BOOST_ROOT "/home/abderlhman")
set(CMAKE_CXX_COMPILER "/home/abderlhman/x-tools/aarch64-rpi4-linux-gnu/bin/aarch64-rpi4-linux-gnu-g++")


# Find the Boost libraries
find_package(Boost REQUIRED COMPONENTS log log_setup system thread)
link_directories(${Boost_LIBRARY_DIRS})
#adding directories
include_directories(${Boost_INCLUDE_DIRS})

#adding subdirectories
add_subdirectory( Math_Application )
add_subdirectory( Daemon_Logger )
add_subdirectory( IPC_library )
add_subdirectory( Logger_Receiver_App )

