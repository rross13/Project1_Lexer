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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project1.dir/flags.make

CMakeFiles/Project1.dir/main.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/main.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/main.cpp

CMakeFiles/Project1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/main.cpp > CMakeFiles/Project1.dir/main.cpp.i

CMakeFiles/Project1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/main.cpp -o CMakeFiles/Project1.dir/main.cpp.s

CMakeFiles/Project1.dir/Lexer.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/Lexer.cpp.o: ../Lexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project1.dir/Lexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/Lexer.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/Lexer.cpp

CMakeFiles/Project1.dir/Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/Lexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/Lexer.cpp > CMakeFiles/Project1.dir/Lexer.cpp.i

CMakeFiles/Project1.dir/Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/Lexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/Lexer.cpp -o CMakeFiles/Project1.dir/Lexer.cpp.s

CMakeFiles/Project1.dir/Token.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/Token.cpp.o: ../Token.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project1.dir/Token.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/Token.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/Token.cpp

CMakeFiles/Project1.dir/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/Token.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/Token.cpp > CMakeFiles/Project1.dir/Token.cpp.i

CMakeFiles/Project1.dir/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/Token.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/Token.cpp -o CMakeFiles/Project1.dir/Token.cpp.s

CMakeFiles/Project1.dir/ColonAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/ColonAutomaton.cpp.o: ../ColonAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project1.dir/ColonAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/ColonAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/ColonAutomaton.cpp

CMakeFiles/Project1.dir/ColonAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/ColonAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/ColonAutomaton.cpp > CMakeFiles/Project1.dir/ColonAutomaton.cpp.i

CMakeFiles/Project1.dir/ColonAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/ColonAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/ColonAutomaton.cpp -o CMakeFiles/Project1.dir/ColonAutomaton.cpp.s

CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.o: ../ColonDashAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/ColonDashAutomaton.cpp

CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/ColonDashAutomaton.cpp > CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.i

CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/ColonDashAutomaton.cpp -o CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.s

CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.o: ../WhiteSpaceAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/WhiteSpaceAutomaton.cpp

CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/WhiteSpaceAutomaton.cpp > CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.i

CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/WhiteSpaceAutomaton.cpp -o CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.s

CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.o: ../LeftParenAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/LeftParenAutomaton.cpp

CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/LeftParenAutomaton.cpp > CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.i

CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/LeftParenAutomaton.cpp -o CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.s

CMakeFiles/Project1.dir/RightParenAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/RightParenAutomaton.cpp.o: ../RightParenAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Project1.dir/RightParenAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/RightParenAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/RightParenAutomaton.cpp

CMakeFiles/Project1.dir/RightParenAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/RightParenAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/RightParenAutomaton.cpp > CMakeFiles/Project1.dir/RightParenAutomaton.cpp.i

CMakeFiles/Project1.dir/RightParenAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/RightParenAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/RightParenAutomaton.cpp -o CMakeFiles/Project1.dir/RightParenAutomaton.cpp.s

CMakeFiles/Project1.dir/CommaAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/CommaAutomaton.cpp.o: ../CommaAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Project1.dir/CommaAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/CommaAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/CommaAutomaton.cpp

CMakeFiles/Project1.dir/CommaAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/CommaAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/CommaAutomaton.cpp > CMakeFiles/Project1.dir/CommaAutomaton.cpp.i

CMakeFiles/Project1.dir/CommaAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/CommaAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/CommaAutomaton.cpp -o CMakeFiles/Project1.dir/CommaAutomaton.cpp.s

CMakeFiles/Project1.dir/PeriodAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/PeriodAutomaton.cpp.o: ../PeriodAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Project1.dir/PeriodAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/PeriodAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/PeriodAutomaton.cpp

CMakeFiles/Project1.dir/PeriodAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/PeriodAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/PeriodAutomaton.cpp > CMakeFiles/Project1.dir/PeriodAutomaton.cpp.i

CMakeFiles/Project1.dir/PeriodAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/PeriodAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/PeriodAutomaton.cpp -o CMakeFiles/Project1.dir/PeriodAutomaton.cpp.s

CMakeFiles/Project1.dir/QMarkAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/QMarkAutomaton.cpp.o: ../QMarkAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Project1.dir/QMarkAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/QMarkAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/QMarkAutomaton.cpp

CMakeFiles/Project1.dir/QMarkAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/QMarkAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/QMarkAutomaton.cpp > CMakeFiles/Project1.dir/QMarkAutomaton.cpp.i

CMakeFiles/Project1.dir/QMarkAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/QMarkAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/QMarkAutomaton.cpp -o CMakeFiles/Project1.dir/QMarkAutomaton.cpp.s

CMakeFiles/Project1.dir/AddAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/AddAutomaton.cpp.o: ../AddAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Project1.dir/AddAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/AddAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/AddAutomaton.cpp

CMakeFiles/Project1.dir/AddAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/AddAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/AddAutomaton.cpp > CMakeFiles/Project1.dir/AddAutomaton.cpp.i

CMakeFiles/Project1.dir/AddAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/AddAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/AddAutomaton.cpp -o CMakeFiles/Project1.dir/AddAutomaton.cpp.s

CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.o: ../MultiplyAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/MultiplyAutomaton.cpp

CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/MultiplyAutomaton.cpp > CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.i

CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/MultiplyAutomaton.cpp -o CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.s

CMakeFiles/Project1.dir/SchemesAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/SchemesAutomaton.cpp.o: ../SchemesAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Project1.dir/SchemesAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/SchemesAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/SchemesAutomaton.cpp

CMakeFiles/Project1.dir/SchemesAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/SchemesAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/SchemesAutomaton.cpp > CMakeFiles/Project1.dir/SchemesAutomaton.cpp.i

CMakeFiles/Project1.dir/SchemesAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/SchemesAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/SchemesAutomaton.cpp -o CMakeFiles/Project1.dir/SchemesAutomaton.cpp.s

CMakeFiles/Project1.dir/FactsAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/FactsAutomaton.cpp.o: ../FactsAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Project1.dir/FactsAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/FactsAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/FactsAutomaton.cpp

CMakeFiles/Project1.dir/FactsAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/FactsAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/FactsAutomaton.cpp > CMakeFiles/Project1.dir/FactsAutomaton.cpp.i

CMakeFiles/Project1.dir/FactsAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/FactsAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/FactsAutomaton.cpp -o CMakeFiles/Project1.dir/FactsAutomaton.cpp.s

CMakeFiles/Project1.dir/RulesAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/RulesAutomaton.cpp.o: ../RulesAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Project1.dir/RulesAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/RulesAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/RulesAutomaton.cpp

CMakeFiles/Project1.dir/RulesAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/RulesAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/RulesAutomaton.cpp > CMakeFiles/Project1.dir/RulesAutomaton.cpp.i

CMakeFiles/Project1.dir/RulesAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/RulesAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/RulesAutomaton.cpp -o CMakeFiles/Project1.dir/RulesAutomaton.cpp.s

CMakeFiles/Project1.dir/QueriesAutomaton.cpp.o: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/QueriesAutomaton.cpp.o: ../QueriesAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/Project1.dir/QueriesAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1.dir/QueriesAutomaton.cpp.o -c /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/QueriesAutomaton.cpp

CMakeFiles/Project1.dir/QueriesAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1.dir/QueriesAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/QueriesAutomaton.cpp > CMakeFiles/Project1.dir/QueriesAutomaton.cpp.i

CMakeFiles/Project1.dir/QueriesAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1.dir/QueriesAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/QueriesAutomaton.cpp -o CMakeFiles/Project1.dir/QueriesAutomaton.cpp.s

# Object files for target Project1
Project1_OBJECTS = \
"CMakeFiles/Project1.dir/main.cpp.o" \
"CMakeFiles/Project1.dir/Lexer.cpp.o" \
"CMakeFiles/Project1.dir/Token.cpp.o" \
"CMakeFiles/Project1.dir/ColonAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/RightParenAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/CommaAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/PeriodAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/QMarkAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/AddAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/SchemesAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/FactsAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/RulesAutomaton.cpp.o" \
"CMakeFiles/Project1.dir/QueriesAutomaton.cpp.o"

# External object files for target Project1
Project1_EXTERNAL_OBJECTS =

Project1: CMakeFiles/Project1.dir/main.cpp.o
Project1: CMakeFiles/Project1.dir/Lexer.cpp.o
Project1: CMakeFiles/Project1.dir/Token.cpp.o
Project1: CMakeFiles/Project1.dir/ColonAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/ColonDashAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/WhiteSpaceAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/LeftParenAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/RightParenAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/CommaAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/PeriodAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/QMarkAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/AddAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/MultiplyAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/SchemesAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/FactsAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/RulesAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/QueriesAutomaton.cpp.o
Project1: CMakeFiles/Project1.dir/build.make
Project1: CMakeFiles/Project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable Project1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project1.dir/build: Project1

.PHONY : CMakeFiles/Project1.dir/build

CMakeFiles/Project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project1.dir/clean

CMakeFiles/Project1.dir/depend:
	cd /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug /users/guest/r/rross13/cs236/project1_lexer/Project1_Lexer/cmake-build-debug/CMakeFiles/Project1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project1.dir/depend

