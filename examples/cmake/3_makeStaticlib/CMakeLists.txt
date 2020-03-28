cmake_minimum_required(VERSION 2.8.9)
project (cmake_example)

#Bring the headers, such as Student.h into the project
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

#Generate the static library from the sources
add_library(testStudent STATIC ${SOURCES})

install(TARGETS testStudent DESTINATION /usr/local/lib)
