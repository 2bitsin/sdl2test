mkdir run_bin_run
pushd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release
cmake --install . --config Release
popd
pushd run_bin_run
SDL2_test.exe
popd