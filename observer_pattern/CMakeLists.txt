# CMakeList.txt : CMake project for observer_pattern, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("observer_pattern")

add_subdirectory(Observable)
add_subdirectory(Observer)

# Add source to this project's executable.
add_executable (observer_pattern "main.cpp" ${SOURCE})



# TODO: Add tests and install targets if needed.
