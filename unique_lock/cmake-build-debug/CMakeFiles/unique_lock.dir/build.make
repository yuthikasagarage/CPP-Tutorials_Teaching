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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/unique_lock.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/unique_lock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/unique_lock.dir/flags.make

CMakeFiles/unique_lock.dir/main.cpp.o: CMakeFiles/unique_lock.dir/flags.make
CMakeFiles/unique_lock.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/unique_lock.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unique_lock.dir/main.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/main.cpp

CMakeFiles/unique_lock.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unique_lock.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/main.cpp > CMakeFiles/unique_lock.dir/main.cpp.i

CMakeFiles/unique_lock.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unique_lock.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/main.cpp -o CMakeFiles/unique_lock.dir/main.cpp.s

# Object files for target unique_lock
unique_lock_OBJECTS = \
"CMakeFiles/unique_lock.dir/main.cpp.o"

# External object files for target unique_lock
unique_lock_EXTERNAL_OBJECTS =

unique_lock: CMakeFiles/unique_lock.dir/main.cpp.o
unique_lock: CMakeFiles/unique_lock.dir/build.make
unique_lock: CMakeFiles/unique_lock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable unique_lock"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unique_lock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/unique_lock.dir/build: unique_lock

.PHONY : CMakeFiles/unique_lock.dir/build

CMakeFiles/unique_lock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/unique_lock.dir/cmake_clean.cmake
.PHONY : CMakeFiles/unique_lock.dir/clean

CMakeFiles/unique_lock.dir/depend:
	cd /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/cplusplus_concurrency/unique_lock/cmake-build-debug/CMakeFiles/unique_lock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/unique_lock.dir/depend

