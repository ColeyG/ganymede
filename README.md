# Ganymede

_Ganymede is my first foray into making a game with sdl2 and c++. I hope to eventually abstract parts of it out to create a framework for easily creating new multiplatform applications for sdl._

## Compiling & Building

### Linux

The dependencies for linux can be sufficed with the following command:

- `sudo apt install cmake g++ libsdl2-dev libsdl2-image-dev`

Associated scripts for building have been included.

- `bash scripts/build.sh` or `bash scripts/buildRun.sh` to compile from source.

### Windows

Building on Windows is unfortunately much more difficult, but the process is quite repeatable after the steps are in place. I've had success with the [mingw-w64 compiler](http://mingw-w64.org/doku.php) and as such I recommend using that compiler. As well, the [SDL2.0 source](https://www.libsdl.org/download-2.0.php) needs to be downloaded from their site. And also the [CMake tools](https://cmake.org/) are required. As well, a DLL is required for [SDL2_image](https://www.libsdl.org/projects/SDL_image/).

After all the above is installed, and added to path such that git bash can execute these programs, drop the SDL 2 source into the includes folder of mingw-w64 (mine was installed at c:/MinGW), then the program can be built. (Just copy & paste the bin, include, lib, and share folders to the same areas in the compiler folder structure).

- `bash scripts/windowsBuild.sh` runs the cmake build and runs the makefile with mingw. After that either link the 'sdl 2 image .dll' to your path or place it in the same folder as the executable. The game should now run!
