# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yoyo/Projects/untitled1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yoyo/Projects/untitled1/build

# Utility rule file for AgentManager_autogen.

# Include any custom commands dependencies for this target.
include Agent_Manager/CMakeFiles/AgentManager_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include Agent_Manager/CMakeFiles/AgentManager_autogen.dir/progress.make

Agent_Manager/CMakeFiles/AgentManager_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/yoyo/Projects/untitled1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target AgentManager"
	cd /home/yoyo/Projects/untitled1/build/Agent_Manager && /usr/bin/cmake -E cmake_autogen /home/yoyo/Projects/untitled1/build/Agent_Manager/CMakeFiles/AgentManager_autogen.dir/AutogenInfo.json Release

AgentManager_autogen: Agent_Manager/CMakeFiles/AgentManager_autogen
AgentManager_autogen: Agent_Manager/CMakeFiles/AgentManager_autogen.dir/build.make
.PHONY : AgentManager_autogen

# Rule to build all files generated by this target.
Agent_Manager/CMakeFiles/AgentManager_autogen.dir/build: AgentManager_autogen
.PHONY : Agent_Manager/CMakeFiles/AgentManager_autogen.dir/build

Agent_Manager/CMakeFiles/AgentManager_autogen.dir/clean:
	cd /home/yoyo/Projects/untitled1/build/Agent_Manager && $(CMAKE_COMMAND) -P CMakeFiles/AgentManager_autogen.dir/cmake_clean.cmake
.PHONY : Agent_Manager/CMakeFiles/AgentManager_autogen.dir/clean

Agent_Manager/CMakeFiles/AgentManager_autogen.dir/depend:
	cd /home/yoyo/Projects/untitled1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yoyo/Projects/untitled1 /home/yoyo/Projects/untitled1/Agent_Manager /home/yoyo/Projects/untitled1/build /home/yoyo/Projects/untitled1/build/Agent_Manager /home/yoyo/Projects/untitled1/build/Agent_Manager/CMakeFiles/AgentManager_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Agent_Manager/CMakeFiles/AgentManager_autogen.dir/depend

