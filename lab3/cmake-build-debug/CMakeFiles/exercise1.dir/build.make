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
CMAKE_COMMAND = /cygdrive/c/Users/AndyB1ance/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/AndyB1ance/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/exercise1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise1.dir/flags.make

CMakeFiles/exercise1.dir/exercise1.cpp.o: CMakeFiles/exercise1.dir/flags.make
CMakeFiles/exercise1.dir/exercise1.cpp.o: ../exercise1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exercise1.dir/exercise1.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exercise1.dir/exercise1.cpp.o -c /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/exercise1.cpp

CMakeFiles/exercise1.dir/exercise1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exercise1.dir/exercise1.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/exercise1.cpp > CMakeFiles/exercise1.dir/exercise1.cpp.i

CMakeFiles/exercise1.dir/exercise1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exercise1.dir/exercise1.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/exercise1.cpp -o CMakeFiles/exercise1.dir/exercise1.cpp.s

# Object files for target exercise1
exercise1_OBJECTS = \
"CMakeFiles/exercise1.dir/exercise1.cpp.o"

# External object files for target exercise1
exercise1_EXTERNAL_OBJECTS =

exercise1.exe: CMakeFiles/exercise1.dir/exercise1.cpp.o
exercise1.exe: CMakeFiles/exercise1.dir/build.make
exercise1.exe: CMakeFiles/exercise1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exercise1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercise1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise1.dir/build: exercise1.exe

.PHONY : CMakeFiles/exercise1.dir/build

CMakeFiles/exercise1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercise1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercise1.dir/clean

CMakeFiles/exercise1.dir/depend:
	cd /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3 /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3 /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/cmake-build-debug /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/cmake-build-debug /cygdrive/d/code/cpp/SUSTech_CS205_cpp/lab3/cmake-build-debug/CMakeFiles/exercise1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercise1.dir/depend

