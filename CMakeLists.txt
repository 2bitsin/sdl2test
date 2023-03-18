cmake_minimum_required(VERSION 3.22)
project(chip8)

add_subdirectory(SDL2)
include_directories($SDL2_INCLUDE_DIRS)
add_executable(chip8 source/main.c)
target_link_libraries(chip8 PUBLIC SDL2::SDL2main SDL2::SDL2-static)
install(TARGETS SDL2 chip8 DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)