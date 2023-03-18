#!/bin/bash
mkdir workspace
mkdir workspace/bin
mkdir build.nix
pushd build.nix
cmake .. -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=../workspace 
cmake --build . --config Debug -- VERBOSE=1
cmake --install . --config Debug
popd
pushd workspace
bin/chip8
popd