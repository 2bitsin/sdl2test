#!/bin/bash
sudo apt-get install build-essential libx11-dev libxext-dev libasound2-dev libpulse-dev libwayland-dev libgles2-mesa-dev libpng-dev libjpeg-dev libvorbis-dev libfreetype6-dev
mkdir workspace
mkdir workspace/bin
mkdir build.nix
pushd build.nix
cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=../workspace 
cmake --build . --config Release -- VERBOSE=1
cmake --install . --config Release
popd
pushd workspace
bin/chip8
popd