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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/operator__overloading.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/operator__overloading.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/operator__overloading.dir/flags.make

CMakeFiles/operator__overloading.dir/main.cpp.o: CMakeFiles/operator__overloading.dir/flags.make
CMakeFiles/operator__overloading.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/operator__overloading.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/operator__overloading.dir/main.cpp.o -c /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/main.cpp

CMakeFiles/operator__overloading.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/operator__overloading.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/main.cpp > CMakeFiles/operator__overloading.dir/main.cpp.i

CMakeFiles/operator__overloading.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/operator__overloading.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/main.cpp -o CMakeFiles/operator__overloading.dir/main.cpp.s

# Object files for target operator__overloading
operator__overloading_OBJECTS = \
"CMakeFiles/operator__overloading.dir/main.cpp.o"

# External object files for target operator__overloading
operator__overloading_EXTERNAL_OBJECTS =

operator__overloading: CMakeFiles/operator__overloading.dir/main.cpp.o
operator__overloading: CMakeFiles/operator__overloading.dir/build.make
operator__overloading: CMakeFiles/operator__overloading.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable operator__overloading"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/operator__overloading.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/operator__overloading.dir/build: operator__overloading

.PHONY : CMakeFiles/operator__overloading.dir/build

CMakeFiles/operator__overloading.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/operator__overloading.dir/cmake_clean.cmake
.PHONY : CMakeFiles/operator__overloading.dir/clean

CMakeFiles/operator__overloading.dir/depend:
	cd /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/operator++overloading/cmake-build-debug/CMakeFiles/operator__overloading.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/operator__overloading.dir/depend

