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
CMAKE_SOURCE_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/namespace.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/namespace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/namespace.dir/flags.make

CMakeFiles/namespace.dir/main.cpp.o: CMakeFiles/namespace.dir/flags.make
CMakeFiles/namespace.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/namespace.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/namespace.dir/main.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/main.cpp

CMakeFiles/namespace.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/namespace.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/main.cpp > CMakeFiles/namespace.dir/main.cpp.i

CMakeFiles/namespace.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/namespace.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/main.cpp -o CMakeFiles/namespace.dir/main.cpp.s

CMakeFiles/namespace.dir/file1x.cpp.o: CMakeFiles/namespace.dir/flags.make
CMakeFiles/namespace.dir/file1x.cpp.o: ../file1x.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/namespace.dir/file1x.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/namespace.dir/file1x.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/file1x.cpp

CMakeFiles/namespace.dir/file1x.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/namespace.dir/file1x.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/file1x.cpp > CMakeFiles/namespace.dir/file1x.cpp.i

CMakeFiles/namespace.dir/file1x.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/namespace.dir/file1x.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/file1x.cpp -o CMakeFiles/namespace.dir/file1x.cpp.s

CMakeFiles/namespace.dir/file2x.cpp.o: CMakeFiles/namespace.dir/flags.make
CMakeFiles/namespace.dir/file2x.cpp.o: ../file2x.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/namespace.dir/file2x.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/namespace.dir/file2x.cpp.o -c /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/file2x.cpp

CMakeFiles/namespace.dir/file2x.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/namespace.dir/file2x.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/file2x.cpp > CMakeFiles/namespace.dir/file2x.cpp.i

CMakeFiles/namespace.dir/file2x.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/namespace.dir/file2x.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/file2x.cpp -o CMakeFiles/namespace.dir/file2x.cpp.s

# Object files for target namespace
namespace_OBJECTS = \
"CMakeFiles/namespace.dir/main.cpp.o" \
"CMakeFiles/namespace.dir/file1x.cpp.o" \
"CMakeFiles/namespace.dir/file2x.cpp.o"

# External object files for target namespace
namespace_EXTERNAL_OBJECTS =

namespace: CMakeFiles/namespace.dir/main.cpp.o
namespace: CMakeFiles/namespace.dir/file1x.cpp.o
namespace: CMakeFiles/namespace.dir/file2x.cpp.o
namespace: CMakeFiles/namespace.dir/build.make
namespace: CMakeFiles/namespace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable namespace"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/namespace.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/namespace.dir/build: namespace

.PHONY : CMakeFiles/namespace.dir/build

CMakeFiles/namespace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/namespace.dir/cmake_clean.cmake
.PHONY : CMakeFiles/namespace.dir/clean

CMakeFiles/namespace.dir/depend:
	cd /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/cmake-build-debug /home/yuthika/Desktop/Tutorials_quarantine/Cplusplus-advanced/namespace/cmake-build-debug/CMakeFiles/namespace.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/namespace.dir/depend

