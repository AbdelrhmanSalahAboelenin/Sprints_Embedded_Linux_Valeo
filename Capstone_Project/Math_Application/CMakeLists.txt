# CMake for Math_Application

# Define the Math_Application executable target
add_executable(Math_Application Math_Application.cpp)

#Link the Math_Application executable with IPC_library
target_link_libraries( Math_Application PRIVATE IPC_library)

