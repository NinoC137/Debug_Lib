# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion\CLion 2022.3.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion\CLion 2022.3.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Clion_for_C\Eembedded_DebugLib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Clion_for_C\Eembedded_DebugLib\cmake-build-debug-mingw_normal

# Include any dependencies generated for this target.
include CMakeFiles/Eembedded_DebugLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Eembedded_DebugLib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Eembedded_DebugLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Eembedded_DebugLib.dir/flags.make

CMakeFiles/Eembedded_DebugLib.dir/main.c.obj: CMakeFiles/Eembedded_DebugLib.dir/flags.make
CMakeFiles/Eembedded_DebugLib.dir/main.c.obj: E:/Clion_for_C/Eembedded_DebugLib/main.c
CMakeFiles/Eembedded_DebugLib.dir/main.c.obj: CMakeFiles/Eembedded_DebugLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Clion_for_C\Eembedded_DebugLib\cmake-build-debug-mingw_normal\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Eembedded_DebugLib.dir/main.c.obj"
	C:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Eembedded_DebugLib.dir/main.c.obj -MF CMakeFiles\Eembedded_DebugLib.dir\main.c.obj.d -o CMakeFiles\Eembedded_DebugLib.dir\main.c.obj -c E:\Clion_for_C\Eembedded_DebugLib\main.c

CMakeFiles/Eembedded_DebugLib.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Eembedded_DebugLib.dir/main.c.i"
	C:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Clion_for_C\Eembedded_DebugLib\main.c > CMakeFiles\Eembedded_DebugLib.dir\main.c.i

CMakeFiles/Eembedded_DebugLib.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Eembedded_DebugLib.dir/main.c.s"
	C:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Clion_for_C\Eembedded_DebugLib\main.c -o CMakeFiles\Eembedded_DebugLib.dir\main.c.s

CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.obj: CMakeFiles/Eembedded_DebugLib.dir/flags.make
CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.obj: E:/Clion_for_C/Eembedded_DebugLib/N_CmdString_debug.c
CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.obj: CMakeFiles/Eembedded_DebugLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Clion_for_C\Eembedded_DebugLib\cmake-build-debug-mingw_normal\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.obj"
	C:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.obj -MF CMakeFiles\Eembedded_DebugLib.dir\N_CmdString_debug.c.obj.d -o CMakeFiles\Eembedded_DebugLib.dir\N_CmdString_debug.c.obj -c E:\Clion_for_C\Eembedded_DebugLib\N_CmdString_debug.c

CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.i"
	C:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Clion_for_C\Eembedded_DebugLib\N_CmdString_debug.c > CMakeFiles\Eembedded_DebugLib.dir\N_CmdString_debug.c.i

CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.s"
	C:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Clion_for_C\Eembedded_DebugLib\N_CmdString_debug.c -o CMakeFiles\Eembedded_DebugLib.dir\N_CmdString_debug.c.s

CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.obj: CMakeFiles/Eembedded_DebugLib.dir/flags.make
CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.obj: E:/Clion_for_C/Eembedded_DebugLib/N_formatString.c
CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.obj: CMakeFiles/Eembedded_DebugLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Clion_for_C\Eembedded_DebugLib\cmake-build-debug-mingw_normal\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.obj"
	C:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.obj -MF CMakeFiles\Eembedded_DebugLib.dir\N_formatString.c.obj.d -o CMakeFiles\Eembedded_DebugLib.dir\N_formatString.c.obj -c E:\Clion_for_C\Eembedded_DebugLib\N_formatString.c

CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.i"
	C:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Clion_for_C\Eembedded_DebugLib\N_formatString.c > CMakeFiles\Eembedded_DebugLib.dir\N_formatString.c.i

CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.s"
	C:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Clion_for_C\Eembedded_DebugLib\N_formatString.c -o CMakeFiles\Eembedded_DebugLib.dir\N_formatString.c.s

# Object files for target Eembedded_DebugLib
Eembedded_DebugLib_OBJECTS = \
"CMakeFiles/Eembedded_DebugLib.dir/main.c.obj" \
"CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.obj" \
"CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.obj"

# External object files for target Eembedded_DebugLib
Eembedded_DebugLib_EXTERNAL_OBJECTS =

Eembedded_DebugLib.exe: CMakeFiles/Eembedded_DebugLib.dir/main.c.obj
Eembedded_DebugLib.exe: CMakeFiles/Eembedded_DebugLib.dir/N_CmdString_debug.c.obj
Eembedded_DebugLib.exe: CMakeFiles/Eembedded_DebugLib.dir/N_formatString.c.obj
Eembedded_DebugLib.exe: CMakeFiles/Eembedded_DebugLib.dir/build.make
Eembedded_DebugLib.exe: CMakeFiles/Eembedded_DebugLib.dir/linkLibs.rsp
Eembedded_DebugLib.exe: CMakeFiles/Eembedded_DebugLib.dir/objects1
Eembedded_DebugLib.exe: CMakeFiles/Eembedded_DebugLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Clion_for_C\Eembedded_DebugLib\cmake-build-debug-mingw_normal\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Eembedded_DebugLib.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Eembedded_DebugLib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Eembedded_DebugLib.dir/build: Eembedded_DebugLib.exe
.PHONY : CMakeFiles/Eembedded_DebugLib.dir/build

CMakeFiles/Eembedded_DebugLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Eembedded_DebugLib.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Eembedded_DebugLib.dir/clean

CMakeFiles/Eembedded_DebugLib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Clion_for_C\Eembedded_DebugLib E:\Clion_for_C\Eembedded_DebugLib E:\Clion_for_C\Eembedded_DebugLib\cmake-build-debug-mingw_normal E:\Clion_for_C\Eembedded_DebugLib\cmake-build-debug-mingw_normal E:\Clion_for_C\Eembedded_DebugLib\cmake-build-debug-mingw_normal\CMakeFiles\Eembedded_DebugLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Eembedded_DebugLib.dir/depend

