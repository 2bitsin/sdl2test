project(SDL2_test)

add_subdirectory(SDL2)

add_executable(SDL2_test main.cpp)

target_link_libraries(SDL2_test SDL2 SDL2main)

install(TARGETS SDL2_test DESTINATION ${CMAKE_SOURCE_DIR}/run_bin_run)