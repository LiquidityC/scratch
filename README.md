# This is a scratch

This is a scratch project. It's used to provide an automated build system for
creating small code tests. Any file (.c/.cpp) placed under `src` will be turned
into an executable based on the filename when the project is built.

So, if you like me, on a regular basis want to confirm how a piece of code will
be compiled or how to efficiently use a certain library you can just drop some
code into this repo and build it.

## Setup

1. `cd <project-path>`
2. `mkdir build`
3. `cmake -DCMAKE_BUILD_TYPE=Debug ..`
4. `make`

After adding or editing files step `4` can be repeated to compile and create
executables.
