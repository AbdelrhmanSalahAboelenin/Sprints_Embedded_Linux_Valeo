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
include Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/compiler_depend.make

# Include the progress variables for this target.
include Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/progress.make

# Include the compile flags for this target's objects.
include Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/flags.make

Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.o: Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/flags.make
Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.o: ../Logger_Receiver_App/Logger_Receiver_App.cpp
Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.o: Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.o"
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Logger_Receiver_App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.o -MF CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.o.d -o CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.o -c /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/Logger_Receiver_App/Logger_Receiver_App.cpp

Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.i"
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Logger_Receiver_App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/Logger_Receiver_App/Logger_Receiver_App.cpp > CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.i

Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.s"
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Logger_Receiver_App && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/Logger_Receiver_App/Logger_Receiver_App.cpp -o CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.s

# Object files for target Logger_Receiver_App
Logger_Receiver_App_OBJECTS = \
"CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.o"

# External object files for target Logger_Receiver_App
Logger_Receiver_App_EXTERNAL_OBJECTS =

Logger_Receiver_App/Logger_Receiver_App: Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/Logger_Receiver_App.cpp.o
Logger_Receiver_App/Logger_Receiver_App: Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/build.make
Logger_Receiver_App/Logger_Receiver_App: /usr/lib/x86_64-linux-gnu/libboost_log_setup.so.1.74.0
Logger_Receiver_App/Logger_Receiver_App: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
Logger_Receiver_App/Logger_Receiver_App: /usr/lib/x86_64-linux-gnu/libboost_log.so.1.74.0
Logger_Receiver_App/Logger_Receiver_App: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.74.0
Logger_Receiver_App/Logger_Receiver_App: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.74.0
Logger_Receiver_App/Logger_Receiver_App: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.74.0
Logger_Receiver_App/Logger_Receiver_App: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0
Logger_Receiver_App/Logger_Receiver_App: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.74.0
Logger_Receiver_App/Logger_Receiver_App: Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Logger_Receiver_App"
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Logger_Receiver_App && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Logger_Receiver_App.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/build: Logger_Receiver_App/Logger_Receiver_App
.PHONY : Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/build

Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/clean:
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Logger_Receiver_App && $(CMAKE_COMMAND) -P CMakeFiles/Logger_Receiver_App.dir/cmake_clean.cmake
.PHONY : Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/clean

Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/depend:
	cd /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/Logger_Receiver_App /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Logger_Receiver_App /home/abdelrhman/Desktop/Sprints_Embedded_Linux_Valeo/Capstone_Project/build/Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Logger_Receiver_App/CMakeFiles/Logger_Receiver_App.dir/depend
