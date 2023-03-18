#!/bin/bash
mkdir workspace
mkdir workspace/bin
mkdir build.nix
pushd build.nix
cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=../workspace
cmake --build . --config Release
cmake --install . --config Release
popd
pushd workspace
bin/chip8
popd