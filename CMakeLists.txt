cmake_minimum_required(VERSION 3.1)

project(sfml_render)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(SFML_DIR extlibs/SFML/build/)
#set(SFML_STATIC_LIBRARIES TRUE)
#set(SFML_ROOT extlibs/SFML/build/lib/)

include_directories(extlibs/SFML/include/)
add_subdirectory(extlibs/SFML/)

include_directories(extlibs/eigen/)
add_subdirectory(extlibs/eigen/)

include_directories(extlibs/json/single_include)
add_subdirectory(extlibs/json/)

find_library(SFML COMPONENTS system window graphics)
find_library(Eigen3 COMPONENTS Dense)
find_library(nlohmann_json COMPONENTS json)

set(EXECUTABLE_NAME project)

add_executable(${EXECUTABLE_NAME} src/main.cpp)

target_link_libraries(${EXECUTABLE_NAME} sfml-graphics sfml-window sfml-system)
target_link_libraries(${EXECUTABLE_NAME} Eigen3::Eigen)
target_link_libraries(${EXECUTABLE_NAME} nlohmann_json::nlohmann_json)
