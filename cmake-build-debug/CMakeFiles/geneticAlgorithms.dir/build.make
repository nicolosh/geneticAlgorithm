# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /cygdrive/c/Users/nicol/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/nicol/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/geneticAlgorithms.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/geneticAlgorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/geneticAlgorithms.dir/flags.make

CMakeFiles/geneticAlgorithms.dir/main.cpp.o: CMakeFiles/geneticAlgorithms.dir/flags.make
CMakeFiles/geneticAlgorithms.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/geneticAlgorithms.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geneticAlgorithms.dir/main.cpp.o -c /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/main.cpp

CMakeFiles/geneticAlgorithms.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geneticAlgorithms.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/main.cpp > CMakeFiles/geneticAlgorithms.dir/main.cpp.i

CMakeFiles/geneticAlgorithms.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geneticAlgorithms.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/main.cpp -o CMakeFiles/geneticAlgorithms.dir/main.cpp.s

CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.o: CMakeFiles/geneticAlgorithms.dir/flags.make
CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.o: ../src/individual.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.o -c /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/src/individual.cpp

CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/src/individual.cpp > CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.i

CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/src/individual.cpp -o CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.s

CMakeFiles/geneticAlgorithms.dir/src/population.cpp.o: CMakeFiles/geneticAlgorithms.dir/flags.make
CMakeFiles/geneticAlgorithms.dir/src/population.cpp.o: ../src/population.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/geneticAlgorithms.dir/src/population.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geneticAlgorithms.dir/src/population.cpp.o -c /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/src/population.cpp

CMakeFiles/geneticAlgorithms.dir/src/population.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geneticAlgorithms.dir/src/population.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/src/population.cpp > CMakeFiles/geneticAlgorithms.dir/src/population.cpp.i

CMakeFiles/geneticAlgorithms.dir/src/population.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geneticAlgorithms.dir/src/population.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/src/population.cpp -o CMakeFiles/geneticAlgorithms.dir/src/population.cpp.s

# Object files for target geneticAlgorithms
geneticAlgorithms_OBJECTS = \
"CMakeFiles/geneticAlgorithms.dir/main.cpp.o" \
"CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.o" \
"CMakeFiles/geneticAlgorithms.dir/src/population.cpp.o"

# External object files for target geneticAlgorithms
geneticAlgorithms_EXTERNAL_OBJECTS =

geneticAlgorithms.exe: CMakeFiles/geneticAlgorithms.dir/main.cpp.o
geneticAlgorithms.exe: CMakeFiles/geneticAlgorithms.dir/src/individual.cpp.o
geneticAlgorithms.exe: CMakeFiles/geneticAlgorithms.dir/src/population.cpp.o
geneticAlgorithms.exe: CMakeFiles/geneticAlgorithms.dir/build.make
geneticAlgorithms.exe: CMakeFiles/geneticAlgorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable geneticAlgorithms.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geneticAlgorithms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/geneticAlgorithms.dir/build: geneticAlgorithms.exe

.PHONY : CMakeFiles/geneticAlgorithms.dir/build

CMakeFiles/geneticAlgorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/geneticAlgorithms.dir/cmake_clean.cmake
.PHONY : CMakeFiles/geneticAlgorithms.dir/clean

CMakeFiles/geneticAlgorithms.dir/depend:
	cd /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/cmake-build-debug /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/cmake-build-debug /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/geneticAlgorithms/cmake-build-debug/CMakeFiles/geneticAlgorithms.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/geneticAlgorithms.dir/depend

