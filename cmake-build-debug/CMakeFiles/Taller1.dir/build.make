# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nicolascaceres/Desktop/TallerColaborativoC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nicolascaceres/Desktop/TallerColaborativoC/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Taller1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Taller1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Taller1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Taller1.dir/flags.make

CMakeFiles/Taller1.dir/main.c.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/main.c.o: /Users/nicolascaceres/Desktop/TallerColaborativoC/main.c
CMakeFiles/Taller1.dir/main.c.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicolascaceres/Desktop/TallerColaborativoC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Taller1.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Taller1.dir/main.c.o -MF CMakeFiles/Taller1.dir/main.c.o.d -o CMakeFiles/Taller1.dir/main.c.o -c /Users/nicolascaceres/Desktop/TallerColaborativoC/main.c

CMakeFiles/Taller1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Taller1.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/nicolascaceres/Desktop/TallerColaborativoC/main.c > CMakeFiles/Taller1.dir/main.c.i

CMakeFiles/Taller1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Taller1.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/nicolascaceres/Desktop/TallerColaborativoC/main.c -o CMakeFiles/Taller1.dir/main.c.s

# Object files for target Taller1
Taller1_OBJECTS = \
"CMakeFiles/Taller1.dir/main.c.o"

# External object files for target Taller1
Taller1_EXTERNAL_OBJECTS =

Taller1: CMakeFiles/Taller1.dir/main.c.o
Taller1: CMakeFiles/Taller1.dir/build.make
Taller1: CMakeFiles/Taller1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nicolascaceres/Desktop/TallerColaborativoC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Taller1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Taller1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Taller1.dir/build: Taller1
.PHONY : CMakeFiles/Taller1.dir/build

CMakeFiles/Taller1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Taller1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Taller1.dir/clean

CMakeFiles/Taller1.dir/depend:
	cd /Users/nicolascaceres/Desktop/TallerColaborativoC/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nicolascaceres/Desktop/TallerColaborativoC /Users/nicolascaceres/Desktop/TallerColaborativoC /Users/nicolascaceres/Desktop/TallerColaborativoC/cmake-build-debug /Users/nicolascaceres/Desktop/TallerColaborativoC/cmake-build-debug /Users/nicolascaceres/Desktop/TallerColaborativoC/cmake-build-debug/CMakeFiles/Taller1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Taller1.dir/depend
