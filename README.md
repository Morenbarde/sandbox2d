# sdl3-starter
This repository defines a simple base for setting up an SDL3 project in a Linux environmet.


## Installation

To install with SDL submodules, run:
```
git clone --depth=1 --recurse-submodules -j8 https://github.com/Morenbarde/sdl3-starter.git
cd sdl3-starter
```

## Usage
This repository is designed to be built with a CMake environment. Modify [CMakeLists.txt](CMakeLists.txt) to change the project name or add any desired executables.

To generate makefiles, run:
```
cmake -B build
```

To build the project, run make in the build directory
```
cd build
make
```

To run the project, run the generated executable. By default, this will be the project name defined in the CMakeLists.txt file. As is, this will be:
```
./sdl3-starter
```

If any files are added to the source directory, cmake needs to be run again to detect them. This can be done from the build directory.
```
cmake ..
```

Building the project will also create several test files which can be used to make sure each of the SDL libraries are linked and working correctly. These are generated in the build/test folder.