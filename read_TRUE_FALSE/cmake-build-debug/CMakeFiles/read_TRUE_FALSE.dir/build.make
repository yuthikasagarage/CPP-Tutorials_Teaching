# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/yuthika/clion-2019.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yuthika/clion-2019.2.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/read_TRUE_FALSE.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/read_TRUE_FALSE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/read_TRUE_FALSE.dir/flags.make

CMakeFiles/read_TRUE_FALSE.dir/main.cpp.o: CMakeFiles/read_TRUE_FALSE.dir/flags.make
CMakeFiles/read_TRUE_FALSE.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/read_TRUE_FALSE.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/read_TRUE_FALSE.dir/main.cpp.o -c /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/main.cpp

CMakeFiles/read_TRUE_FALSE.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/read_TRUE_FALSE.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/main.cpp > CMakeFiles/read_TRUE_FALSE.dir/main.cpp.i

CMakeFiles/read_TRUE_FALSE.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/read_TRUE_FALSE.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/main.cpp -o CMakeFiles/read_TRUE_FALSE.dir/main.cpp.s

# Object files for target read_TRUE_FALSE
read_TRUE_FALSE_OBJECTS = \
"CMakeFiles/read_TRUE_FALSE.dir/main.cpp.o"

# External object files for target read_TRUE_FALSE
read_TRUE_FALSE_EXTERNAL_OBJECTS =

read_TRUE_FALSE: CMakeFiles/read_TRUE_FALSE.dir/main.cpp.o
read_TRUE_FALSE: CMakeFiles/read_TRUE_FALSE.dir/build.make
read_TRUE_FALSE: CMakeFiles/read_TRUE_FALSE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable read_TRUE_FALSE"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/read_TRUE_FALSE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/read_TRUE_FALSE.dir/build: read_TRUE_FALSE

.PHONY : CMakeFiles/read_TRUE_FALSE.dir/build

CMakeFiles/read_TRUE_FALSE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/read_TRUE_FALSE.dir/cmake_clean.cmake
.PHONY : CMakeFiles/read_TRUE_FALSE.dir/clean

CMakeFiles/read_TRUE_FALSE.dir/depend:
	cd /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/read_TRUE_FALSE/cmake-build-debug/CMakeFiles/read_TRUE_FALSE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/read_TRUE_FALSE.dir/depend

