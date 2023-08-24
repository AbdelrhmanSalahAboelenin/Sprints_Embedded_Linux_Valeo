cmake_minimum_required(VERSION 3.10)
project(PROJECT)

# Find Boost components
#find_package(Boost REQUIRED)

# Add subdirectories for fh and requester
add_subdirectory(file_handler)
add_subdirectory(requester)
add_subdirectory(log)
#to compile the project open terminal in build folder and run command cmake ..
#then make
#then all folder hierarchy will be created inside build folder with executables inside
