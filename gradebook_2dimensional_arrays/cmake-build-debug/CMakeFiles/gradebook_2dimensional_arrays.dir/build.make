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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gradebook_2dimensional_arrays.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gradebook_2dimensional_arrays.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gradebook_2dimensional_arrays.dir/flags.make

CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.o: CMakeFiles/gradebook_2dimensional_arrays.dir/flags.make
CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/main.cpp

CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/main.cpp > CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.i

CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/main.cpp -o CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.s

CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.o: CMakeFiles/gradebook_2dimensional_arrays.dir/flags.make
CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.o: ../gradebook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/gradebook.cpp

CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/gradebook.cpp > CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.i

CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/gradebook.cpp -o CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.s

# Object files for target gradebook_2dimensional_arrays
gradebook_2dimensional_arrays_OBJECTS = \
"CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.o" \
"CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.o"

# External object files for target gradebook_2dimensional_arrays
gradebook_2dimensional_arrays_EXTERNAL_OBJECTS =

gradebook_2dimensional_arrays: CMakeFiles/gradebook_2dimensional_arrays.dir/main.cpp.o
gradebook_2dimensional_arrays: CMakeFiles/gradebook_2dimensional_arrays.dir/gradebook.cpp.o
gradebook_2dimensional_arrays: CMakeFiles/gradebook_2dimensional_arrays.dir/build.make
gradebook_2dimensional_arrays: CMakeFiles/gradebook_2dimensional_arrays.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable gradebook_2dimensional_arrays"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gradebook_2dimensional_arrays.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gradebook_2dimensional_arrays.dir/build: gradebook_2dimensional_arrays

.PHONY : CMakeFiles/gradebook_2dimensional_arrays.dir/build

CMakeFiles/gradebook_2dimensional_arrays.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gradebook_2dimensional_arrays.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gradebook_2dimensional_arrays.dir/clean

CMakeFiles/gradebook_2dimensional_arrays.dir/depend:
	cd /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/gradebook_2dimensional_arrays/cmake-build-debug/CMakeFiles/gradebook_2dimensional_arrays.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gradebook_2dimensional_arrays.dir/depend

