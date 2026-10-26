# sandbox2d
This repository contains a simple set of programs for exploring various 2d physics simulation, visualized using SDL3.


## Installation

To install with SDL submodules, run:
```
git clone --depth=1 --recurse-submodules -j8 https://github.com/Morenbarde/sandbox2d.git
cd sandbox2d
```

## Usage
This repository is designed to be built with a CMake environment.

To generate makefiles run cmake from the base directory. By default, this will be done in Debug mode.
```
cmake -B build
```

To build the project, run make in the build directory
```
cd build
make
```

To run the project, run the generated executable in the bin folder:
```
./bin/sandbox2d
```