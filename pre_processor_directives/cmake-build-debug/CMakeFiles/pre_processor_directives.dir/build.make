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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pre_processor_directives.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pre_processor_directives.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pre_processor_directives.dir/flags.make

CMakeFiles/pre_processor_directives.dir/main.cpp.o: CMakeFiles/pre_processor_directives.dir/flags.make
CMakeFiles/pre_processor_directives.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pre_processor_directives.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pre_processor_directives.dir/main.cpp.o -c /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/main.cpp

CMakeFiles/pre_processor_directives.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pre_processor_directives.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/main.cpp > CMakeFiles/pre_processor_directives.dir/main.cpp.i

CMakeFiles/pre_processor_directives.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pre_processor_directives.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/main.cpp -o CMakeFiles/pre_processor_directives.dir/main.cpp.s

CMakeFiles/pre_processor_directives.dir/person_class.cpp.o: CMakeFiles/pre_processor_directives.dir/flags.make
CMakeFiles/pre_processor_directives.dir/person_class.cpp.o: ../person_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pre_processor_directives.dir/person_class.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pre_processor_directives.dir/person_class.cpp.o -c /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/person_class.cpp

CMakeFiles/pre_processor_directives.dir/person_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pre_processor_directives.dir/person_class.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/person_class.cpp > CMakeFiles/pre_processor_directives.dir/person_class.cpp.i

CMakeFiles/pre_processor_directives.dir/person_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pre_processor_directives.dir/person_class.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/person_class.cpp -o CMakeFiles/pre_processor_directives.dir/person_class.cpp.s

# Object files for target pre_processor_directives
pre_processor_directives_OBJECTS = \
"CMakeFiles/pre_processor_directives.dir/main.cpp.o" \
"CMakeFiles/pre_processor_directives.dir/person_class.cpp.o"

# External object files for target pre_processor_directives
pre_processor_directives_EXTERNAL_OBJECTS =

pre_processor_directives: CMakeFiles/pre_processor_directives.dir/main.cpp.o
pre_processor_directives: CMakeFiles/pre_processor_directives.dir/person_class.cpp.o
pre_processor_directives: CMakeFiles/pre_processor_directives.dir/build.make
pre_processor_directives: CMakeFiles/pre_processor_directives.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable pre_processor_directives"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pre_processor_directives.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pre_processor_directives.dir/build: pre_processor_directives

.PHONY : CMakeFiles/pre_processor_directives.dir/build

CMakeFiles/pre_processor_directives.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pre_processor_directives.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pre_processor_directives.dir/clean

CMakeFiles/pre_processor_directives.dir/depend:
	cd /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/cmake-build-debug /home/yuthika/Desktop/Cplusplus-advanced/get_pull/pre_processor_directives/cmake-build-debug/CMakeFiles/pre_processor_directives.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pre_processor_directives.dir/depend

