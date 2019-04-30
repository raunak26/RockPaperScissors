cmake_minimum_required(VERSION 3.13)
project(RockPaperScissors)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

add_executable(RockPaperScissors main.cpp StringFunctions.cpp StringFunctions.h CharFunctions.cpp CharFunctions.h SwitchFunction.cpp SwitchFunction.h rockpaperscissors.cpp rockpaperscissors.h)
target_compile_options(RockPaperScissors PRIVATE -Wall -Werror)