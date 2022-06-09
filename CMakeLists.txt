project(demo)
cmake_minimum_required(VERSION 2.6)

add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

enable_testing()

add_subdirectory(test)

#method1, add automatically.
file(GLOB sources
          *.cpp
          )

#method 2, manually add
#set(sources
#   main.cpp
#   sum.cpp)

add_executable(demo ${sources})

target_link_libraries(demo gmock)
target_link_libraries(demo gtest)
target_link_libraries(demo pthread)

