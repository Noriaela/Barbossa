cmake_minimum_required(VERSION 3.12)
project(barbossa)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ./bin)
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)

# And in the linking 
add_library(barbossa SHARED ${barbossa} ${SRC} ${SDL2_LIBRARY})
target_link_libraries(barbossa "-framework OpenGL")

set_target_properties(barbossa PROPERTIES PREFIX "")

