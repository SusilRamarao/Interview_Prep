# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/build

# Include any dependencies generated for this target.
include CMakeFiles/IPC_Client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/IPC_Client.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/IPC_Client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/IPC_Client.dir/flags.make

CMakeFiles/IPC_Client.dir/codegen:
.PHONY : CMakeFiles/IPC_Client.dir/codegen

CMakeFiles/IPC_Client.dir/main.cpp.o: CMakeFiles/IPC_Client.dir/flags.make
CMakeFiles/IPC_Client.dir/main.cpp.o: /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/main.cpp
CMakeFiles/IPC_Client.dir/main.cpp.o: CMakeFiles/IPC_Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IPC_Client.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/IPC_Client.dir/main.cpp.o -MF CMakeFiles/IPC_Client.dir/main.cpp.o.d -o CMakeFiles/IPC_Client.dir/main.cpp.o -c /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/main.cpp

CMakeFiles/IPC_Client.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/IPC_Client.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/main.cpp > CMakeFiles/IPC_Client.dir/main.cpp.i

CMakeFiles/IPC_Client.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/IPC_Client.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/main.cpp -o CMakeFiles/IPC_Client.dir/main.cpp.s

# Object files for target IPC_Client
IPC_Client_OBJECTS = \
"CMakeFiles/IPC_Client.dir/main.cpp.o"

# External object files for target IPC_Client
IPC_Client_EXTERNAL_OBJECTS =

IPC_Client: CMakeFiles/IPC_Client.dir/main.cpp.o
IPC_Client: CMakeFiles/IPC_Client.dir/build.make
IPC_Client: CMakeFiles/IPC_Client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IPC_Client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IPC_Client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/IPC_Client.dir/build: IPC_Client
.PHONY : CMakeFiles/IPC_Client.dir/build

CMakeFiles/IPC_Client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/IPC_Client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/IPC_Client.dir/clean

CMakeFiles/IPC_Client.dir/depend:
	cd /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/build /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/build /Users/susilramarao/Desktop/Interview_Prep/Interview_Preparation/c++/IPC/code/build/CMakeFiles/IPC_Client.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/IPC_Client.dir/depend

