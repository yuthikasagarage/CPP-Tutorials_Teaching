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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Cplusplus-advanced/strings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Cplusplus-advanced/strings/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/strings.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/strings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strings.dir/flags.make

CMakeFiles/strings.dir/main.cpp.o: CMakeFiles/strings.dir/flags.make
CMakeFiles/strings.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/strings/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/strings.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/strings.dir/main.cpp.o -c /home/yuthika/Desktop/Cplusplus-advanced/strings/main.cpp

CMakeFiles/strings.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/strings.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Cplusplus-advanced/strings/main.cpp > CMakeFiles/strings.dir/main.cpp.i

CMakeFiles/strings.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/strings.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Cplusplus-advanced/strings/main.cpp -o CMakeFiles/strings.dir/main.cpp.s

# Object files for target strings
strings_OBJECTS = \
"CMakeFiles/strings.dir/main.cpp.o"

# External object files for target strings
strings_EXTERNAL_OBJECTS =

strings: CMakeFiles/strings.dir/main.cpp.o
strings: CMakeFiles/strings.dir/build.make
strings: CMakeFiles/strings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/strings/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable strings"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/strings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strings.dir/build: strings

.PHONY : CMakeFiles/strings.dir/build

CMakeFiles/strings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/strings.dir/cmake_clean.cmake
.PHONY : CMakeFiles/strings.dir/clean

CMakeFiles/strings.dir/depend:
	cd /home/yuthika/Desktop/Cplusplus-advanced/strings/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Cplusplus-advanced/strings /home/yuthika/Desktop/Cplusplus-advanced/strings /home/yuthika/Desktop/Cplusplus-advanced/strings/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/strings/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/strings/cmake-build-debug/CMakeFiles/strings.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strings.dir/depend

