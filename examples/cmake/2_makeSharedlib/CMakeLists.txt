cmake_minimum_required(VERSION 2.8.9)
project(cmake_example)
set(CMAKE_BUILD_TYPE Release)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(testStudent SHARED ${SOURCES})

# Set the location for library installation -- i.e. , /usr/local/lib in this case
# Use "sudo make install" to apply
install(TARGETS testStudent DESTINATION /usr/local/lib)

