cmake_minimum_required(VERSION 3.1)


project(sfml_render)

set(EXECUTABLE_NAME project)

include_directories(extlibs/SFML)

add_executable(${EXECUTABLE_NAME} src/main.cpp)

target_link_libraries(${EXECUTABLE_NAME} PUBLIC SFML)
