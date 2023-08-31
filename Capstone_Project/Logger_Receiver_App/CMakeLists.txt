# CMake for the Logger Receiver App
add_executable(Logger_Receiver_App Logger_Receiver_App.cpp)

# Include directories for Boost headers
target_include_directories(Logger_Receiver_App PRIVATE ${Boost_INCLUDE_DIRS})

#link app with IPC_library
target_link_libraries(Logger_Receiver_App PRIVATE  ${Boost_LIBRARIES} pthread)

