# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build

# Include any dependencies generated for this target.
include Daemon_Logger/CMakeFiles/Daemon_Logger.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Daemon_Logger/CMakeFiles/Daemon_Logger.dir/compiler_depend.make

# Include the progress variables for this target.
include Daemon_Logger/CMakeFiles/Daemon_Logger.dir/progress.make

# Include the compile flags for this target's objects.
include Daemon_Logger/CMakeFiles/Daemon_Logger.dir/flags.make

Daemon_Logger/CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.o: Daemon_Logger/CMakeFiles/Daemon_Logger.dir/flags.make
Daemon_Logger/CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.o: ../Daemon_Logger/Daemon_Logger.cpp
Daemon_Logger/CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.o: Daemon_Logger/CMakeFiles/Daemon_Logger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Daemon_Logger/CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.o"
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Daemon_Logger && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Daemon_Logger/CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.o -MF CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.o.d -o CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.o -c /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/Daemon_Logger/Daemon_Logger.cpp

Daemon_Logger/CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.i"
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Daemon_Logger && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/Daemon_Logger/Daemon_Logger.cpp > CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.i

Daemon_Logger/CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.s"
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Daemon_Logger && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/Daemon_Logger/Daemon_Logger.cpp -o CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.s

# Object files for target Daemon_Logger
Daemon_Logger_OBJECTS = \
"CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.o"

# External object files for target Daemon_Logger
Daemon_Logger_EXTERNAL_OBJECTS =

Daemon_Logger/Daemon_Logger: Daemon_Logger/CMakeFiles/Daemon_Logger.dir/Daemon_Logger.cpp.o
Daemon_Logger/Daemon_Logger: Daemon_Logger/CMakeFiles/Daemon_Logger.dir/build.make
Daemon_Logger/Daemon_Logger: IPC_library/libIPC_library.a
Daemon_Logger/Daemon_Logger: /usr/lib/x86_64-linux-gnu/libboost_log_setup.so.1.74.0
Daemon_Logger/Daemon_Logger: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
Daemon_Logger/Daemon_Logger: /usr/lib/x86_64-linux-gnu/libboost_log.so.1.74.0
Daemon_Logger/Daemon_Logger: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.74.0
Daemon_Logger/Daemon_Logger: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.74.0
Daemon_Logger/Daemon_Logger: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.74.0
Daemon_Logger/Daemon_Logger: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0
Daemon_Logger/Daemon_Logger: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.74.0
Daemon_Logger/Daemon_Logger: Daemon_Logger/CMakeFiles/Daemon_Logger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Daemon_Logger"
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Daemon_Logger && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Daemon_Logger.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Daemon_Logger/CMakeFiles/Daemon_Logger.dir/build: Daemon_Logger/Daemon_Logger
.PHONY : Daemon_Logger/CMakeFiles/Daemon_Logger.dir/build

Daemon_Logger/CMakeFiles/Daemon_Logger.dir/clean:
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Daemon_Logger && $(CMAKE_COMMAND) -P CMakeFiles/Daemon_Logger.dir/cmake_clean.cmake
.PHONY : Daemon_Logger/CMakeFiles/Daemon_Logger.dir/clean

Daemon_Logger/CMakeFiles/Daemon_Logger.dir/depend:
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/Daemon_Logger /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Daemon_Logger /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Daemon_Logger/CMakeFiles/Daemon_Logger.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Daemon_Logger/CMakeFiles/Daemon_Logger.dir/depend

