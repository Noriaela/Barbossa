# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.11.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.11.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jameshenson/Barbossa

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jameshenson/Barbossa

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.11.0/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.11.0/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/jameshenson/Barbossa/CMakeFiles /Users/jameshenson/Barbossa/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/jameshenson/Barbossa/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Barbossa

# Build rule for target.
Barbossa: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Barbossa
.PHONY : Barbossa

# fast build rule for target.
Barbossa/fast:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/build
.PHONY : Barbossa/fast

Drawings/drawings.o: Drawings/drawings.cpp.o

.PHONY : Drawings/drawings.o

# target to build an object file
Drawings/drawings.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Drawings/drawings.cpp.o
.PHONY : Drawings/drawings.cpp.o

Drawings/drawings.i: Drawings/drawings.cpp.i

.PHONY : Drawings/drawings.i

# target to preprocess a source file
Drawings/drawings.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Drawings/drawings.cpp.i
.PHONY : Drawings/drawings.cpp.i

Drawings/drawings.s: Drawings/drawings.cpp.s

.PHONY : Drawings/drawings.s

# target to generate assembly for a file
Drawings/drawings.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Drawings/drawings.cpp.s
.PHONY : Drawings/drawings.cpp.s

Drawings/menu.o: Drawings/menu.cpp.o

.PHONY : Drawings/menu.o

# target to build an object file
Drawings/menu.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Drawings/menu.cpp.o
.PHONY : Drawings/menu.cpp.o

Drawings/menu.i: Drawings/menu.cpp.i

.PHONY : Drawings/menu.i

# target to preprocess a source file
Drawings/menu.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Drawings/menu.cpp.i
.PHONY : Drawings/menu.cpp.i

Drawings/menu.s: Drawings/menu.cpp.s

.PHONY : Drawings/menu.s

# target to generate assembly for a file
Drawings/menu.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Drawings/menu.cpp.s
.PHONY : Drawings/menu.cpp.s

Hacks/aimbot.o: Hacks/aimbot.cpp.o

.PHONY : Hacks/aimbot.o

# target to build an object file
Hacks/aimbot.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/aimbot.cpp.o
.PHONY : Hacks/aimbot.cpp.o

Hacks/aimbot.i: Hacks/aimbot.cpp.i

.PHONY : Hacks/aimbot.i

# target to preprocess a source file
Hacks/aimbot.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/aimbot.cpp.i
.PHONY : Hacks/aimbot.cpp.i

Hacks/aimbot.s: Hacks/aimbot.cpp.s

.PHONY : Hacks/aimbot.s

# target to generate assembly for a file
Hacks/aimbot.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/aimbot.cpp.s
.PHONY : Hacks/aimbot.cpp.s

Hacks/antiaim.o: Hacks/antiaim.cpp.o

.PHONY : Hacks/antiaim.o

# target to build an object file
Hacks/antiaim.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/antiaim.cpp.o
.PHONY : Hacks/antiaim.cpp.o

Hacks/antiaim.i: Hacks/antiaim.cpp.i

.PHONY : Hacks/antiaim.i

# target to preprocess a source file
Hacks/antiaim.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/antiaim.cpp.i
.PHONY : Hacks/antiaim.cpp.i

Hacks/antiaim.s: Hacks/antiaim.cpp.s

.PHONY : Hacks/antiaim.s

# target to generate assembly for a file
Hacks/antiaim.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/antiaim.cpp.s
.PHONY : Hacks/antiaim.cpp.s

Hacks/autoshoot.o: Hacks/autoshoot.cpp.o

.PHONY : Hacks/autoshoot.o

# target to build an object file
Hacks/autoshoot.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/autoshoot.cpp.o
.PHONY : Hacks/autoshoot.cpp.o

Hacks/autoshoot.i: Hacks/autoshoot.cpp.i

.PHONY : Hacks/autoshoot.i

# target to preprocess a source file
Hacks/autoshoot.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/autoshoot.cpp.i
.PHONY : Hacks/autoshoot.cpp.i

Hacks/autoshoot.s: Hacks/autoshoot.cpp.s

.PHONY : Hacks/autoshoot.s

# target to generate assembly for a file
Hacks/autoshoot.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/autoshoot.cpp.s
.PHONY : Hacks/autoshoot.cpp.s

Hacks/autowall.o: Hacks/autowall.cpp.o

.PHONY : Hacks/autowall.o

# target to build an object file
Hacks/autowall.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/autowall.cpp.o
.PHONY : Hacks/autowall.cpp.o

Hacks/autowall.i: Hacks/autowall.cpp.i

.PHONY : Hacks/autowall.i

# target to preprocess a source file
Hacks/autowall.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/autowall.cpp.i
.PHONY : Hacks/autowall.cpp.i

Hacks/autowall.s: Hacks/autowall.cpp.s

.PHONY : Hacks/autowall.s

# target to generate assembly for a file
Hacks/autowall.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/autowall.cpp.s
.PHONY : Hacks/autowall.cpp.s

Hacks/bhop.o: Hacks/bhop.cpp.o

.PHONY : Hacks/bhop.o

# target to build an object file
Hacks/bhop.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/bhop.cpp.o
.PHONY : Hacks/bhop.cpp.o

Hacks/bhop.i: Hacks/bhop.cpp.i

.PHONY : Hacks/bhop.i

# target to preprocess a source file
Hacks/bhop.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/bhop.cpp.i
.PHONY : Hacks/bhop.cpp.i

Hacks/bhop.s: Hacks/bhop.cpp.s

.PHONY : Hacks/bhop.s

# target to generate assembly for a file
Hacks/bhop.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/bhop.cpp.s
.PHONY : Hacks/bhop.cpp.s

Hacks/clantag.o: Hacks/clantag.cpp.o

.PHONY : Hacks/clantag.o

# target to build an object file
Hacks/clantag.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/clantag.cpp.o
.PHONY : Hacks/clantag.cpp.o

Hacks/clantag.i: Hacks/clantag.cpp.i

.PHONY : Hacks/clantag.i

# target to preprocess a source file
Hacks/clantag.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/clantag.cpp.i
.PHONY : Hacks/clantag.cpp.i

Hacks/clantag.s: Hacks/clantag.cpp.s

.PHONY : Hacks/clantag.s

# target to generate assembly for a file
Hacks/clantag.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/clantag.cpp.s
.PHONY : Hacks/clantag.cpp.s

Hacks/crosshair.o: Hacks/crosshair.cpp.o

.PHONY : Hacks/crosshair.o

# target to build an object file
Hacks/crosshair.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/crosshair.cpp.o
.PHONY : Hacks/crosshair.cpp.o

Hacks/crosshair.i: Hacks/crosshair.cpp.i

.PHONY : Hacks/crosshair.i

# target to preprocess a source file
Hacks/crosshair.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/crosshair.cpp.i
.PHONY : Hacks/crosshair.cpp.i

Hacks/crosshair.s: Hacks/crosshair.cpp.s

.PHONY : Hacks/crosshair.s

# target to generate assembly for a file
Hacks/crosshair.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/crosshair.cpp.s
.PHONY : Hacks/crosshair.cpp.s

Hacks/esp.o: Hacks/esp.cpp.o

.PHONY : Hacks/esp.o

# target to build an object file
Hacks/esp.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/esp.cpp.o
.PHONY : Hacks/esp.cpp.o

Hacks/esp.i: Hacks/esp.cpp.i

.PHONY : Hacks/esp.i

# target to preprocess a source file
Hacks/esp.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/esp.cpp.i
.PHONY : Hacks/esp.cpp.i

Hacks/esp.s: Hacks/esp.cpp.s

.PHONY : Hacks/esp.s

# target to generate assembly for a file
Hacks/esp.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/esp.cpp.s
.PHONY : Hacks/esp.cpp.s

Hacks/resolver.o: Hacks/resolver.cpp.o

.PHONY : Hacks/resolver.o

# target to build an object file
Hacks/resolver.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/resolver.cpp.o
.PHONY : Hacks/resolver.cpp.o

Hacks/resolver.i: Hacks/resolver.cpp.i

.PHONY : Hacks/resolver.i

# target to preprocess a source file
Hacks/resolver.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/resolver.cpp.i
.PHONY : Hacks/resolver.cpp.i

Hacks/resolver.s: Hacks/resolver.cpp.s

.PHONY : Hacks/resolver.s

# target to generate assembly for a file
Hacks/resolver.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/resolver.cpp.s
.PHONY : Hacks/resolver.cpp.s

Hacks/spammer.o: Hacks/spammer.cpp.o

.PHONY : Hacks/spammer.o

# target to build an object file
Hacks/spammer.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/spammer.cpp.o
.PHONY : Hacks/spammer.cpp.o

Hacks/spammer.i: Hacks/spammer.cpp.i

.PHONY : Hacks/spammer.i

# target to preprocess a source file
Hacks/spammer.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/spammer.cpp.i
.PHONY : Hacks/spammer.cpp.i

Hacks/spammer.s: Hacks/spammer.cpp.s

.PHONY : Hacks/spammer.s

# target to generate assembly for a file
Hacks/spammer.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/spammer.cpp.s
.PHONY : Hacks/spammer.cpp.s

Hacks/spectators.o: Hacks/spectators.cpp.o

.PHONY : Hacks/spectators.o

# target to build an object file
Hacks/spectators.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/spectators.cpp.o
.PHONY : Hacks/spectators.cpp.o

Hacks/spectators.i: Hacks/spectators.cpp.i

.PHONY : Hacks/spectators.i

# target to preprocess a source file
Hacks/spectators.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/spectators.cpp.i
.PHONY : Hacks/spectators.cpp.i

Hacks/spectators.s: Hacks/spectators.cpp.s

.PHONY : Hacks/spectators.s

# target to generate assembly for a file
Hacks/spectators.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/spectators.cpp.s
.PHONY : Hacks/spectators.cpp.s

Hacks/triggerbot.o: Hacks/triggerbot.cpp.o

.PHONY : Hacks/triggerbot.o

# target to build an object file
Hacks/triggerbot.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/triggerbot.cpp.o
.PHONY : Hacks/triggerbot.cpp.o

Hacks/triggerbot.i: Hacks/triggerbot.cpp.i

.PHONY : Hacks/triggerbot.i

# target to preprocess a source file
Hacks/triggerbot.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/triggerbot.cpp.i
.PHONY : Hacks/triggerbot.cpp.i

Hacks/triggerbot.s: Hacks/triggerbot.cpp.s

.PHONY : Hacks/triggerbot.s

# target to generate assembly for a file
Hacks/triggerbot.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hacks/triggerbot.cpp.s
.PHONY : Hacks/triggerbot.cpp.s

Hooks/BeginFrame.o: Hooks/BeginFrame.cpp.o

.PHONY : Hooks/BeginFrame.o

# target to build an object file
Hooks/BeginFrame.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/BeginFrame.cpp.o
.PHONY : Hooks/BeginFrame.cpp.o

Hooks/BeginFrame.i: Hooks/BeginFrame.cpp.i

.PHONY : Hooks/BeginFrame.i

# target to preprocess a source file
Hooks/BeginFrame.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/BeginFrame.cpp.i
.PHONY : Hooks/BeginFrame.cpp.i

Hooks/BeginFrame.s: Hooks/BeginFrame.cpp.s

.PHONY : Hooks/BeginFrame.s

# target to generate assembly for a file
Hooks/BeginFrame.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/BeginFrame.cpp.s
.PHONY : Hooks/BeginFrame.cpp.s

Hooks/CreateMove.o: Hooks/CreateMove.cpp.o

.PHONY : Hooks/CreateMove.o

# target to build an object file
Hooks/CreateMove.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/CreateMove.cpp.o
.PHONY : Hooks/CreateMove.cpp.o

Hooks/CreateMove.i: Hooks/CreateMove.cpp.i

.PHONY : Hooks/CreateMove.i

# target to preprocess a source file
Hooks/CreateMove.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/CreateMove.cpp.i
.PHONY : Hooks/CreateMove.cpp.i

Hooks/CreateMove.s: Hooks/CreateMove.cpp.s

.PHONY : Hooks/CreateMove.s

# target to generate assembly for a file
Hooks/CreateMove.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/CreateMove.cpp.s
.PHONY : Hooks/CreateMove.cpp.s

Hooks/DrawModelExecute.o: Hooks/DrawModelExecute.cpp.o

.PHONY : Hooks/DrawModelExecute.o

# target to build an object file
Hooks/DrawModelExecute.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/DrawModelExecute.cpp.o
.PHONY : Hooks/DrawModelExecute.cpp.o

Hooks/DrawModelExecute.i: Hooks/DrawModelExecute.cpp.i

.PHONY : Hooks/DrawModelExecute.i

# target to preprocess a source file
Hooks/DrawModelExecute.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/DrawModelExecute.cpp.i
.PHONY : Hooks/DrawModelExecute.cpp.i

Hooks/DrawModelExecute.s: Hooks/DrawModelExecute.cpp.s

.PHONY : Hooks/DrawModelExecute.s

# target to generate assembly for a file
Hooks/DrawModelExecute.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/DrawModelExecute.cpp.s
.PHONY : Hooks/DrawModelExecute.cpp.s

Hooks/FrameStage.o: Hooks/FrameStage.cpp.o

.PHONY : Hooks/FrameStage.o

# target to build an object file
Hooks/FrameStage.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/FrameStage.cpp.o
.PHONY : Hooks/FrameStage.cpp.o

Hooks/FrameStage.i: Hooks/FrameStage.cpp.i

.PHONY : Hooks/FrameStage.i

# target to preprocess a source file
Hooks/FrameStage.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/FrameStage.cpp.i
.PHONY : Hooks/FrameStage.cpp.i

Hooks/FrameStage.s: Hooks/FrameStage.cpp.s

.PHONY : Hooks/FrameStage.s

# target to generate assembly for a file
Hooks/FrameStage.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/FrameStage.cpp.s
.PHONY : Hooks/FrameStage.cpp.s

Hooks/KeyEvent.o: Hooks/KeyEvent.cpp.o

.PHONY : Hooks/KeyEvent.o

# target to build an object file
Hooks/KeyEvent.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/KeyEvent.cpp.o
.PHONY : Hooks/KeyEvent.cpp.o

Hooks/KeyEvent.i: Hooks/KeyEvent.cpp.i

.PHONY : Hooks/KeyEvent.i

# target to preprocess a source file
Hooks/KeyEvent.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/KeyEvent.cpp.i
.PHONY : Hooks/KeyEvent.cpp.i

Hooks/KeyEvent.s: Hooks/KeyEvent.cpp.s

.PHONY : Hooks/KeyEvent.s

# target to generate assembly for a file
Hooks/KeyEvent.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/KeyEvent.cpp.s
.PHONY : Hooks/KeyEvent.cpp.s

Hooks/OverrideView.o: Hooks/OverrideView.cpp.o

.PHONY : Hooks/OverrideView.o

# target to build an object file
Hooks/OverrideView.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/OverrideView.cpp.o
.PHONY : Hooks/OverrideView.cpp.o

Hooks/OverrideView.i: Hooks/OverrideView.cpp.i

.PHONY : Hooks/OverrideView.i

# target to preprocess a source file
Hooks/OverrideView.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/OverrideView.cpp.i
.PHONY : Hooks/OverrideView.cpp.i

Hooks/OverrideView.s: Hooks/OverrideView.cpp.s

.PHONY : Hooks/OverrideView.s

# target to generate assembly for a file
Hooks/OverrideView.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/OverrideView.cpp.s
.PHONY : Hooks/OverrideView.cpp.s

Hooks/PaintTraverse.o: Hooks/PaintTraverse.cpp.o

.PHONY : Hooks/PaintTraverse.o

# target to build an object file
Hooks/PaintTraverse.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/PaintTraverse.cpp.o
.PHONY : Hooks/PaintTraverse.cpp.o

Hooks/PaintTraverse.i: Hooks/PaintTraverse.cpp.i

.PHONY : Hooks/PaintTraverse.i

# target to preprocess a source file
Hooks/PaintTraverse.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/PaintTraverse.cpp.i
.PHONY : Hooks/PaintTraverse.cpp.i

Hooks/PaintTraverse.s: Hooks/PaintTraverse.cpp.s

.PHONY : Hooks/PaintTraverse.s

# target to generate assembly for a file
Hooks/PaintTraverse.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/PaintTraverse.cpp.s
.PHONY : Hooks/PaintTraverse.cpp.s

Hooks/RunCommand.o: Hooks/RunCommand.cpp.o

.PHONY : Hooks/RunCommand.o

# target to build an object file
Hooks/RunCommand.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/RunCommand.cpp.o
.PHONY : Hooks/RunCommand.cpp.o

Hooks/RunCommand.i: Hooks/RunCommand.cpp.i

.PHONY : Hooks/RunCommand.i

# target to preprocess a source file
Hooks/RunCommand.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/RunCommand.cpp.i
.PHONY : Hooks/RunCommand.cpp.i

Hooks/RunCommand.s: Hooks/RunCommand.cpp.s

.PHONY : Hooks/RunCommand.s

# target to generate assembly for a file
Hooks/RunCommand.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Hooks/RunCommand.cpp.s
.PHONY : Hooks/RunCommand.cpp.s

Interfaces/Hooks.o: Interfaces/Hooks.cpp.o

.PHONY : Interfaces/Hooks.o

# target to build an object file
Interfaces/Hooks.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Interfaces/Hooks.cpp.o
.PHONY : Interfaces/Hooks.cpp.o

Interfaces/Hooks.i: Interfaces/Hooks.cpp.i

.PHONY : Interfaces/Hooks.i

# target to preprocess a source file
Interfaces/Hooks.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Interfaces/Hooks.cpp.i
.PHONY : Interfaces/Hooks.cpp.i

Interfaces/Hooks.s: Interfaces/Hooks.cpp.s

.PHONY : Interfaces/Hooks.s

# target to generate assembly for a file
Interfaces/Hooks.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Interfaces/Hooks.cpp.s
.PHONY : Interfaces/Hooks.cpp.s

Interfaces/interfaces.o: Interfaces/interfaces.cpp.o

.PHONY : Interfaces/interfaces.o

# target to build an object file
Interfaces/interfaces.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Interfaces/interfaces.cpp.o
.PHONY : Interfaces/interfaces.cpp.o

Interfaces/interfaces.i: Interfaces/interfaces.cpp.i

.PHONY : Interfaces/interfaces.i

# target to preprocess a source file
Interfaces/interfaces.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Interfaces/interfaces.cpp.i
.PHONY : Interfaces/interfaces.cpp.i

Interfaces/interfaces.s: Interfaces/interfaces.cpp.s

.PHONY : Interfaces/interfaces.s

# target to generate assembly for a file
Interfaces/interfaces.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Interfaces/interfaces.cpp.s
.PHONY : Interfaces/interfaces.cpp.s

SDK/offsets.o: SDK/offsets.cpp.o

.PHONY : SDK/offsets.o

# target to build an object file
SDK/offsets.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/SDK/offsets.cpp.o
.PHONY : SDK/offsets.cpp.o

SDK/offsets.i: SDK/offsets.cpp.i

.PHONY : SDK/offsets.i

# target to preprocess a source file
SDK/offsets.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/SDK/offsets.cpp.i
.PHONY : SDK/offsets.cpp.i

SDK/offsets.s: SDK/offsets.cpp.s

.PHONY : SDK/offsets.s

# target to generate assembly for a file
SDK/offsets.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/SDK/offsets.cpp.s
.PHONY : SDK/offsets.cpp.s

Settings/bvars.o: Settings/bvars.cpp.o

.PHONY : Settings/bvars.o

# target to build an object file
Settings/bvars.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Settings/bvars.cpp.o
.PHONY : Settings/bvars.cpp.o

Settings/bvars.i: Settings/bvars.cpp.i

.PHONY : Settings/bvars.i

# target to preprocess a source file
Settings/bvars.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Settings/bvars.cpp.i
.PHONY : Settings/bvars.cpp.i

Settings/bvars.s: Settings/bvars.cpp.s

.PHONY : Settings/bvars.s

# target to generate assembly for a file
Settings/bvars.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Settings/bvars.cpp.s
.PHONY : Settings/bvars.cpp.s

Utils/netvarmanager.o: Utils/netvarmanager.cpp.o

.PHONY : Utils/netvarmanager.o

# target to build an object file
Utils/netvarmanager.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Utils/netvarmanager.cpp.o
.PHONY : Utils/netvarmanager.cpp.o

Utils/netvarmanager.i: Utils/netvarmanager.cpp.i

.PHONY : Utils/netvarmanager.i

# target to preprocess a source file
Utils/netvarmanager.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Utils/netvarmanager.cpp.i
.PHONY : Utils/netvarmanager.cpp.i

Utils/netvarmanager.s: Utils/netvarmanager.cpp.s

.PHONY : Utils/netvarmanager.s

# target to generate assembly for a file
Utils/netvarmanager.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Utils/netvarmanager.cpp.s
.PHONY : Utils/netvarmanager.cpp.s

Utils/patternscan.o: Utils/patternscan.cpp.o

.PHONY : Utils/patternscan.o

# target to build an object file
Utils/patternscan.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Utils/patternscan.cpp.o
.PHONY : Utils/patternscan.cpp.o

Utils/patternscan.i: Utils/patternscan.cpp.i

.PHONY : Utils/patternscan.i

# target to preprocess a source file
Utils/patternscan.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Utils/patternscan.cpp.i
.PHONY : Utils/patternscan.cpp.i

Utils/patternscan.s: Utils/patternscan.cpp.s

.PHONY : Utils/patternscan.s

# target to generate assembly for a file
Utils/patternscan.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Utils/patternscan.cpp.s
.PHONY : Utils/patternscan.cpp.s

Utils/utils.o: Utils/utils.cpp.o

.PHONY : Utils/utils.o

# target to build an object file
Utils/utils.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Utils/utils.cpp.o
.PHONY : Utils/utils.cpp.o

Utils/utils.i: Utils/utils.cpp.i

.PHONY : Utils/utils.i

# target to preprocess a source file
Utils/utils.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Utils/utils.cpp.i
.PHONY : Utils/utils.cpp.i

Utils/utils.s: Utils/utils.cpp.s

.PHONY : Utils/utils.s

# target to generate assembly for a file
Utils/utils.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/Utils/utils.cpp.s
.PHONY : Utils/utils.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/Barbossa.dir/build.make CMakeFiles/Barbossa.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... Barbossa"
	@echo "... Drawings/drawings.o"
	@echo "... Drawings/drawings.i"
	@echo "... Drawings/drawings.s"
	@echo "... Drawings/menu.o"
	@echo "... Drawings/menu.i"
	@echo "... Drawings/menu.s"
	@echo "... Hacks/aimbot.o"
	@echo "... Hacks/aimbot.i"
	@echo "... Hacks/aimbot.s"
	@echo "... Hacks/antiaim.o"
	@echo "... Hacks/antiaim.i"
	@echo "... Hacks/antiaim.s"
	@echo "... Hacks/autoshoot.o"
	@echo "... Hacks/autoshoot.i"
	@echo "... Hacks/autoshoot.s"
	@echo "... Hacks/autowall.o"
	@echo "... Hacks/autowall.i"
	@echo "... Hacks/autowall.s"
	@echo "... Hacks/bhop.o"
	@echo "... Hacks/bhop.i"
	@echo "... Hacks/bhop.s"
	@echo "... Hacks/clantag.o"
	@echo "... Hacks/clantag.i"
	@echo "... Hacks/clantag.s"
	@echo "... Hacks/crosshair.o"
	@echo "... Hacks/crosshair.i"
	@echo "... Hacks/crosshair.s"
	@echo "... Hacks/esp.o"
	@echo "... Hacks/esp.i"
	@echo "... Hacks/esp.s"
	@echo "... Hacks/resolver.o"
	@echo "... Hacks/resolver.i"
	@echo "... Hacks/resolver.s"
	@echo "... Hacks/spammer.o"
	@echo "... Hacks/spammer.i"
	@echo "... Hacks/spammer.s"
	@echo "... Hacks/spectators.o"
	@echo "... Hacks/spectators.i"
	@echo "... Hacks/spectators.s"
	@echo "... Hacks/triggerbot.o"
	@echo "... Hacks/triggerbot.i"
	@echo "... Hacks/triggerbot.s"
	@echo "... Hooks/BeginFrame.o"
	@echo "... Hooks/BeginFrame.i"
	@echo "... Hooks/BeginFrame.s"
	@echo "... Hooks/CreateMove.o"
	@echo "... Hooks/CreateMove.i"
	@echo "... Hooks/CreateMove.s"
	@echo "... Hooks/DrawModelExecute.o"
	@echo "... Hooks/DrawModelExecute.i"
	@echo "... Hooks/DrawModelExecute.s"
	@echo "... Hooks/FrameStage.o"
	@echo "... Hooks/FrameStage.i"
	@echo "... Hooks/FrameStage.s"
	@echo "... Hooks/KeyEvent.o"
	@echo "... Hooks/KeyEvent.i"
	@echo "... Hooks/KeyEvent.s"
	@echo "... Hooks/OverrideView.o"
	@echo "... Hooks/OverrideView.i"
	@echo "... Hooks/OverrideView.s"
	@echo "... Hooks/PaintTraverse.o"
	@echo "... Hooks/PaintTraverse.i"
	@echo "... Hooks/PaintTraverse.s"
	@echo "... Hooks/RunCommand.o"
	@echo "... Hooks/RunCommand.i"
	@echo "... Hooks/RunCommand.s"
	@echo "... Interfaces/Hooks.o"
	@echo "... Interfaces/Hooks.i"
	@echo "... Interfaces/Hooks.s"
	@echo "... Interfaces/interfaces.o"
	@echo "... Interfaces/interfaces.i"
	@echo "... Interfaces/interfaces.s"
	@echo "... SDK/offsets.o"
	@echo "... SDK/offsets.i"
	@echo "... SDK/offsets.s"
	@echo "... Settings/bvars.o"
	@echo "... Settings/bvars.i"
	@echo "... Settings/bvars.s"
	@echo "... Utils/netvarmanager.o"
	@echo "... Utils/netvarmanager.i"
	@echo "... Utils/netvarmanager.s"
	@echo "... Utils/patternscan.o"
	@echo "... Utils/patternscan.i"
	@echo "... Utils/patternscan.s"
	@echo "... Utils/utils.o"
	@echo "... Utils/utils.i"
	@echo "... Utils/utils.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
