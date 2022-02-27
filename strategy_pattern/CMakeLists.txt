# CMakeList.txt : CMake project for strategy_pattern, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("strategy_pattern")

add_subdirectory(DisplayBehavior)
add_subdirectory(FlyBehavior)
add_subdirectory(QuackBehavior)

# Add source to this project's executable.
add_executable (strategy_pattern "main.cpp" "Duck.h" ${SOURCE})



# TODO: Add tests and install targets if needed.
