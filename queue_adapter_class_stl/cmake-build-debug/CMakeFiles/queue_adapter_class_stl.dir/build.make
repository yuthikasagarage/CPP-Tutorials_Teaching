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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/queue_adapter_class_stl.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/queue_adapter_class_stl.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/queue_adapter_class_stl.dir/flags.make

CMakeFiles/queue_adapter_class_stl.dir/main.cpp.o: CMakeFiles/queue_adapter_class_stl.dir/flags.make
CMakeFiles/queue_adapter_class_stl.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/queue_adapter_class_stl.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/queue_adapter_class_stl.dir/main.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/main.cpp

CMakeFiles/queue_adapter_class_stl.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/queue_adapter_class_stl.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/main.cpp > CMakeFiles/queue_adapter_class_stl.dir/main.cpp.i

CMakeFiles/queue_adapter_class_stl.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/queue_adapter_class_stl.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/main.cpp -o CMakeFiles/queue_adapter_class_stl.dir/main.cpp.s

# Object files for target queue_adapter_class_stl
queue_adapter_class_stl_OBJECTS = \
"CMakeFiles/queue_adapter_class_stl.dir/main.cpp.o"

# External object files for target queue_adapter_class_stl
queue_adapter_class_stl_EXTERNAL_OBJECTS =

queue_adapter_class_stl: CMakeFiles/queue_adapter_class_stl.dir/main.cpp.o
queue_adapter_class_stl: CMakeFiles/queue_adapter_class_stl.dir/build.make
queue_adapter_class_stl: CMakeFiles/queue_adapter_class_stl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable queue_adapter_class_stl"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/queue_adapter_class_stl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/queue_adapter_class_stl.dir/build: queue_adapter_class_stl

.PHONY : CMakeFiles/queue_adapter_class_stl.dir/build

CMakeFiles/queue_adapter_class_stl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/queue_adapter_class_stl.dir/cmake_clean.cmake
.PHONY : CMakeFiles/queue_adapter_class_stl.dir/clean

CMakeFiles/queue_adapter_class_stl.dir/depend:
	cd /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/queue_adapter_class_stl/cmake-build-debug/CMakeFiles/queue_adapter_class_stl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/queue_adapter_class_stl.dir/depend

