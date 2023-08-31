# CMake for the Daemon_logger app
add_executable(Daemon_Logger Daemon_Logger.cpp)

#link app with IPC_library
target_link_libraries(Daemon_Logger PRIVATE IPC_library ${Boost_LIBRARIES} pthread)


