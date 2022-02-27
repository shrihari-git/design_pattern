# CMakeList.txt : CMake project for decorator_pattern, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("decorator_pattern")

add_subdirectory(Beverage)
add_subdirectory(Addons)

# Add source to this project's executable.
add_executable (decorator_pattern "main.cpp" ${SOURCE})



# TODO: Add tests and install targets if needed.
