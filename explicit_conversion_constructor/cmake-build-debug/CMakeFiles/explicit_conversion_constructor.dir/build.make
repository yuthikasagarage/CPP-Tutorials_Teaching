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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/explicit_conversion_constructor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/explicit_conversion_constructor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/explicit_conversion_constructor.dir/flags.make

CMakeFiles/explicit_conversion_constructor.dir/main.cpp.o: CMakeFiles/explicit_conversion_constructor.dir/flags.make
CMakeFiles/explicit_conversion_constructor.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/explicit_conversion_constructor.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/explicit_conversion_constructor.dir/main.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/main.cpp

CMakeFiles/explicit_conversion_constructor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/explicit_conversion_constructor.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/main.cpp > CMakeFiles/explicit_conversion_constructor.dir/main.cpp.i

CMakeFiles/explicit_conversion_constructor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/explicit_conversion_constructor.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/main.cpp -o CMakeFiles/explicit_conversion_constructor.dir/main.cpp.s

CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.o: CMakeFiles/explicit_conversion_constructor.dir/flags.make
CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.o: ../Array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/Array.cpp

CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/Array.cpp > CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.i

CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/Array.cpp -o CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.s

# Object files for target explicit_conversion_constructor
explicit_conversion_constructor_OBJECTS = \
"CMakeFiles/explicit_conversion_constructor.dir/main.cpp.o" \
"CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.o"

# External object files for target explicit_conversion_constructor
explicit_conversion_constructor_EXTERNAL_OBJECTS =

explicit_conversion_constructor: CMakeFiles/explicit_conversion_constructor.dir/main.cpp.o
explicit_conversion_constructor: CMakeFiles/explicit_conversion_constructor.dir/Array.cpp.o
explicit_conversion_constructor: CMakeFiles/explicit_conversion_constructor.dir/build.make
explicit_conversion_constructor: CMakeFiles/explicit_conversion_constructor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable explicit_conversion_constructor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/explicit_conversion_constructor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/explicit_conversion_constructor.dir/build: explicit_conversion_constructor

.PHONY : CMakeFiles/explicit_conversion_constructor.dir/build

CMakeFiles/explicit_conversion_constructor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/explicit_conversion_constructor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/explicit_conversion_constructor.dir/clean

CMakeFiles/explicit_conversion_constructor.dir/depend:
	cd /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/explicit_conversion_constructor/cmake-build-debug/CMakeFiles/explicit_conversion_constructor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/explicit_conversion_constructor.dir/depend

