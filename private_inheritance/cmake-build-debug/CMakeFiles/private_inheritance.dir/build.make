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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/private_inheritance.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/private_inheritance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/private_inheritance.dir/flags.make

CMakeFiles/private_inheritance.dir/main.cpp.o: CMakeFiles/private_inheritance.dir/flags.make
CMakeFiles/private_inheritance.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/private_inheritance.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/private_inheritance.dir/main.cpp.o -c /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/main.cpp

CMakeFiles/private_inheritance.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/private_inheritance.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/main.cpp > CMakeFiles/private_inheritance.dir/main.cpp.i

CMakeFiles/private_inheritance.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/private_inheritance.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/main.cpp -o CMakeFiles/private_inheritance.dir/main.cpp.s

# Object files for target private_inheritance
private_inheritance_OBJECTS = \
"CMakeFiles/private_inheritance.dir/main.cpp.o"

# External object files for target private_inheritance
private_inheritance_EXTERNAL_OBJECTS =

private_inheritance: CMakeFiles/private_inheritance.dir/main.cpp.o
private_inheritance: CMakeFiles/private_inheritance.dir/build.make
private_inheritance: CMakeFiles/private_inheritance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable private_inheritance"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/private_inheritance.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/private_inheritance.dir/build: private_inheritance

.PHONY : CMakeFiles/private_inheritance.dir/build

CMakeFiles/private_inheritance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/private_inheritance.dir/cmake_clean.cmake
.PHONY : CMakeFiles/private_inheritance.dir/clean

CMakeFiles/private_inheritance.dir/depend:
	cd /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/private_inheritance/cmake-build-debug/CMakeFiles/private_inheritance.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/private_inheritance.dir/depend

