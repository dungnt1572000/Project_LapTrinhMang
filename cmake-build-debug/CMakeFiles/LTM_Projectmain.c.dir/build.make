# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/hieudz/Downloads/application/CLion-2021.2.2/clion-2021.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/hieudz/Downloads/application/CLion-2021.2.2/clion-2021.2.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hieudz/CLionProjects/LTM_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hieudz/CLionProjects/LTM_Project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LTM_Projectmain.c.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/LTM_Projectmain.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LTM_Projectmain.c.dir/flags.make

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.o: ../Handle/src/HandleMain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.o -c /home/hieudz/CLionProjects/LTM_Project/Handle/src/HandleMain.c

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/Handle/src/HandleMain.c > CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.i

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/Handle/src/HandleMain.c -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.s

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.o: ../Handle/src/InitClient.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.o -c /home/hieudz/CLionProjects/LTM_Project/Handle/src/InitClient.c

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/Handle/src/InitClient.c > CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.i

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/Handle/src/InitClient.c -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.s

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.o: ../Handle/src/handleGame.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.o -c /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleGame.c

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleGame.c > CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.i

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleGame.c -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.s

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.o: ../Handle/src/handleLogin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.o -c /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleLogin.c

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleLogin.c > CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.i

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleLogin.c -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.s

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.o: ../Handle/src/handleRecvData.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.o -c /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleRecvData.c

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleRecvData.c > CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.i

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleRecvData.c -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.s

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.o: ../Handle/src/handleRoom.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.o -c /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleRoom.c

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleRoom.c > CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.i

CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/Handle/src/handleRoom.c -o CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.s

CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.o: ../View/src/InitScreen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.o -c /home/hieudz/CLionProjects/LTM_Project/View/src/InitScreen.c

CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/View/src/InitScreen.c > CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.i

CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/View/src/InitScreen.c -o CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.s

CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.o: ../View/src/LoginController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.o -c /home/hieudz/CLionProjects/LTM_Project/View/src/LoginController.c

CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/View/src/LoginController.c > CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.i

CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/View/src/LoginController.c -o CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.s

CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.o: ../View/src/finalController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.o -c /home/hieudz/CLionProjects/LTM_Project/View/src/finalController.c

CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/View/src/finalController.c > CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.i

CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/View/src/finalController.c -o CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.s

CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.o: ../View/src/gameController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.o -c /home/hieudz/CLionProjects/LTM_Project/View/src/gameController.c

CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/View/src/gameController.c > CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.i

CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/View/src/gameController.c -o CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.s

CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.o: ../View/src/loserController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.o -c /home/hieudz/CLionProjects/LTM_Project/View/src/loserController.c

CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/View/src/loserController.c > CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.i

CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/View/src/loserController.c -o CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.s

CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.o: ../View/src/mainController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.o -c /home/hieudz/CLionProjects/LTM_Project/View/src/mainController.c

CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/View/src/mainController.c > CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.i

CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/View/src/mainController.c -o CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.s

CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.o: ../View/src/roomController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.o -c /home/hieudz/CLionProjects/LTM_Project/View/src/roomController.c

CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/View/src/roomController.c > CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.i

CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/View/src/roomController.c -o CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.s

CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.o: CMakeFiles/LTM_Projectmain.c.dir/flags.make
CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.o: ../View/src/winnerController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.o -c /home/hieudz/CLionProjects/LTM_Project/View/src/winnerController.c

CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hieudz/CLionProjects/LTM_Project/View/src/winnerController.c > CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.i

CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hieudz/CLionProjects/LTM_Project/View/src/winnerController.c -o CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.s

# Object files for target LTM_Projectmain.c
LTM_Projectmain_c_OBJECTS = \
"CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.o" \
"CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.o"

# External object files for target LTM_Projectmain.c
LTM_Projectmain_c_EXTERNAL_OBJECTS =

LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/Handle/src/HandleMain.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/Handle/src/InitClient.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleGame.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleLogin.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRecvData.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/Handle/src/handleRoom.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/View/src/InitScreen.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/View/src/LoginController.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/View/src/finalController.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/View/src/gameController.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/View/src/loserController.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/View/src/mainController.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/View/src/roomController.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/View/src/winnerController.c.o
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/build.make
LTM_Projectmain.c: CMakeFiles/LTM_Projectmain.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking C executable LTM_Projectmain.c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LTM_Projectmain.c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LTM_Projectmain.c.dir/build: LTM_Projectmain.c
.PHONY : CMakeFiles/LTM_Projectmain.c.dir/build

CMakeFiles/LTM_Projectmain.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LTM_Projectmain.c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LTM_Projectmain.c.dir/clean

CMakeFiles/LTM_Projectmain.c.dir/depend:
	cd /home/hieudz/CLionProjects/LTM_Project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hieudz/CLionProjects/LTM_Project /home/hieudz/CLionProjects/LTM_Project /home/hieudz/CLionProjects/LTM_Project/cmake-build-debug /home/hieudz/CLionProjects/LTM_Project/cmake-build-debug /home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/CMakeFiles/LTM_Projectmain.c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LTM_Projectmain.c.dir/depend
