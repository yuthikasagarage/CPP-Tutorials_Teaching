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
CMAKE_SOURCE_DIR = "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/static_with_dynamic_memory_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/static_with_dynamic_memory_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/static_with_dynamic_memory_.dir/flags.make

CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.o: CMakeFiles/static_with_dynamic_memory_.dir/flags.make
CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.o -c "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/main.cpp"

CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/main.cpp" > CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.i

CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/main.cpp" -o CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.s

CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.o: CMakeFiles/static_with_dynamic_memory_.dir/flags.make
CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.o: ../employee.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.o -c "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/employee.cpp"

CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/employee.cpp" > CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.i

CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/employee.cpp" -o CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.s

# Object files for target static_with_dynamic_memory_
static_with_dynamic_memory__OBJECTS = \
"CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.o" \
"CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.o"

# External object files for target static_with_dynamic_memory_
static_with_dynamic_memory__EXTERNAL_OBJECTS =

static_with_dynamic_memory_: CMakeFiles/static_with_dynamic_memory_.dir/main.cpp.o
static_with_dynamic_memory_: CMakeFiles/static_with_dynamic_memory_.dir/employee.cpp.o
static_with_dynamic_memory_: CMakeFiles/static_with_dynamic_memory_.dir/build.make
static_with_dynamic_memory_: CMakeFiles/static_with_dynamic_memory_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable static_with_dynamic_memory_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/static_with_dynamic_memory_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/static_with_dynamic_memory_.dir/build: static_with_dynamic_memory_

.PHONY : CMakeFiles/static_with_dynamic_memory_.dir/build

CMakeFiles/static_with_dynamic_memory_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/static_with_dynamic_memory_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/static_with_dynamic_memory_.dir/clean

CMakeFiles/static_with_dynamic_memory_.dir/depend:
	cd "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/cmake-build-debug" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/cmake-build-debug" "/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/static_with_dynamic_memory'/cmake-build-debug/CMakeFiles/static_with_dynamic_memory_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/static_with_dynamic_memory_.dir/depend

