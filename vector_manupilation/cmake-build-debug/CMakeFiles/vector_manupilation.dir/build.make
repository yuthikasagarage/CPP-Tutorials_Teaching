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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vector_manupilation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vector_manupilation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vector_manupilation.dir/flags.make

CMakeFiles/vector_manupilation.dir/main.cpp.o: CMakeFiles/vector_manupilation.dir/flags.make
CMakeFiles/vector_manupilation.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vector_manupilation.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vector_manupilation.dir/main.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/main.cpp

CMakeFiles/vector_manupilation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector_manupilation.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/main.cpp > CMakeFiles/vector_manupilation.dir/main.cpp.i

CMakeFiles/vector_manupilation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector_manupilation.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/main.cpp -o CMakeFiles/vector_manupilation.dir/main.cpp.s

# Object files for target vector_manupilation
vector_manupilation_OBJECTS = \
"CMakeFiles/vector_manupilation.dir/main.cpp.o"

# External object files for target vector_manupilation
vector_manupilation_EXTERNAL_OBJECTS =

vector_manupilation: CMakeFiles/vector_manupilation.dir/main.cpp.o
vector_manupilation: CMakeFiles/vector_manupilation.dir/build.make
vector_manupilation: CMakeFiles/vector_manupilation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vector_manupilation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector_manupilation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vector_manupilation.dir/build: vector_manupilation

.PHONY : CMakeFiles/vector_manupilation.dir/build

CMakeFiles/vector_manupilation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vector_manupilation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vector_manupilation.dir/clean

CMakeFiles/vector_manupilation.dir/depend:
	cd /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/vector_manupilation/cmake-build-debug/CMakeFiles/vector_manupilation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vector_manupilation.dir/depend

