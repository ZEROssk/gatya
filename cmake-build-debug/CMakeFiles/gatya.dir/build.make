# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /private/var/folders/71/2t8s5hjx3_lf7d0ydmh_12y00000gn/T/AppTranslocation/F9C32983-D71F-4A30-BC5F-0A916EE675BE/d/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /private/var/folders/71/2t8s5hjx3_lf7d0ydmh_12y00000gn/T/AppTranslocation/F9C32983-D71F-4A30-BC5F-0A916EE675BE/d/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gatya.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gatya.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gatya.dir/flags.make

CMakeFiles/gatya.dir/gatya.c.o: CMakeFiles/gatya.dir/flags.make
CMakeFiles/gatya.dir/gatya.c.o: ../gatya.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/gatya.dir/gatya.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/gatya.dir/gatya.c.o   -c /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/gatya.c

CMakeFiles/gatya.dir/gatya.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/gatya.dir/gatya.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/gatya.c > CMakeFiles/gatya.dir/gatya.c.i

CMakeFiles/gatya.dir/gatya.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/gatya.dir/gatya.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/gatya.c -o CMakeFiles/gatya.dir/gatya.c.s

CMakeFiles/gatya.dir/gatya.c.o.requires:

.PHONY : CMakeFiles/gatya.dir/gatya.c.o.requires

CMakeFiles/gatya.dir/gatya.c.o.provides: CMakeFiles/gatya.dir/gatya.c.o.requires
	$(MAKE) -f CMakeFiles/gatya.dir/build.make CMakeFiles/gatya.dir/gatya.c.o.provides.build
.PHONY : CMakeFiles/gatya.dir/gatya.c.o.provides

CMakeFiles/gatya.dir/gatya.c.o.provides.build: CMakeFiles/gatya.dir/gatya.c.o


# Object files for target gatya
gatya_OBJECTS = \
"CMakeFiles/gatya.dir/gatya.c.o"

# External object files for target gatya
gatya_EXTERNAL_OBJECTS =

gatya: CMakeFiles/gatya.dir/gatya.c.o
gatya: CMakeFiles/gatya.dir/build.make
gatya: CMakeFiles/gatya.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable gatya"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gatya.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gatya.dir/build: gatya

.PHONY : CMakeFiles/gatya.dir/build

CMakeFiles/gatya.dir/requires: CMakeFiles/gatya.dir/gatya.c.o.requires

.PHONY : CMakeFiles/gatya.dir/requires

CMakeFiles/gatya.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gatya.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gatya.dir/clean

CMakeFiles/gatya.dir/depend:
	cd /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/cmake-build-debug /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/cmake-build-debug /Users/zero/Documents/GitHub/ZEROssk.github.io/gatya/cmake-build-debug/CMakeFiles/gatya.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gatya.dir/depend

