# CMakeList.txt : CMake project for factory_method_pattern, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("factory_method_pattern")

add_subdirectory(Animal)
add_subdirectory(AnimalFactory)

# Add source to this project's executable.
add_executable (factory_method_pattern "main.cpp" ${SOURCE})



# TODO: Add tests and install targets if needed.
