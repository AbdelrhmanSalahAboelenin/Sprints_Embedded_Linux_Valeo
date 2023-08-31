# CMake for the IPC_library

#Define the IPC_library targets
add_library(IPC_library STATIC IPC_library.cpp)

#Define include directories for IPC_library target
target_link_directories(IPC_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
