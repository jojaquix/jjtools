# jjtools

This repo is a collection of little tools (binaries with few dependencies).

* **chunk_writer** write some bytes in file given as argument until 'q' is pressed



## Build

For CMake 3.13 or newer, run the following commands:

cmake -G "Visual Studio 16 2019" -A Win32 -S \path_to_source\ -B "build32"
cmake -G "Visual Studio 16 2019" -A x64 -S \path_to_source\ -B "build64"
cmake --build build32 --config Release
cmake --build build64 --config Release

From <https://stackoverflow.com/questions/28350214/how-to-build-x86-and-or-x64-on-windows-from-command-line-with-cmake> 


For earlier version of CMake, run the following commands:
mkdir build32 & pushd build32
cmake -G "Visual Studio 15 2017" \path_to_source\
popd
mkdir build64 & pushd build64
cmake -G "Visual Studio 15 2017" Win64" \path_to_source\
popd
cmake --build build32 --config Release
cmake --build build64 --config Release

From <https://stackoverflow.com/questions/28350214/how-to-build-x86-and-or-x64-on-windows-from-command-line-with-cmake> 
