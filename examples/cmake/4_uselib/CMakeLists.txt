cmake_minimum_required(VERSION 2.8.9)
project(cmake_examples)

# for the shared library
	set (PROJECT_LINK_LIBS libtestStudent.so)
link_directories(./../2_makeSharedlib/build)

include_directories(./../2_makeSharedlib/include)

	add_executable(libtest main.cpp)
target_link_libraries(libtest ${PROJECT_LINK_LIBS})
