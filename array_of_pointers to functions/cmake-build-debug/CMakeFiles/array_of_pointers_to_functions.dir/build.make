# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/array_of_pointers_to_functions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/array_of_pointers_to_functions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/array_of_pointers_to_functions.dir/flags.make

CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.o: CMakeFiles/array_of_pointers_to_functions.dir/flags.make
CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.o -c "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/main.cpp"

CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/main.cpp" > CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.i

CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/main.cpp" -o CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.s

# Object files for target array_of_pointers_to_functions
array_of_pointers_to_functions_OBJECTS = \
"CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.o"

# External object files for target array_of_pointers_to_functions
array_of_pointers_to_functions_EXTERNAL_OBJECTS =

array_of_pointers_to_functions: CMakeFiles/array_of_pointers_to_functions.dir/main.cpp.o
array_of_pointers_to_functions: CMakeFiles/array_of_pointers_to_functions.dir/build.make
array_of_pointers_to_functions: CMakeFiles/array_of_pointers_to_functions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable array_of_pointers_to_functions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/array_of_pointers_to_functions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/array_of_pointers_to_functions.dir/build: array_of_pointers_to_functions

.PHONY : CMakeFiles/array_of_pointers_to_functions.dir/build

CMakeFiles/array_of_pointers_to_functions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/array_of_pointers_to_functions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/array_of_pointers_to_functions.dir/clean

CMakeFiles/array_of_pointers_to_functions.dir/depend:
	cd "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/cmake-build-debug" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/cmake-build-debug" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/array_of_pointers to functions/cmake-build-debug/CMakeFiles/array_of_pointers_to_functions.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/array_of_pointers_to_functions.dir/depend

