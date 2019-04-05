cmake_minimum_required(VERSION 2.6)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -v -stdlib=libc++")
set(HEADER_FILES include/instance_of)

add_executable(tests test/instance_of.pass.cpp ${HEADER_FILES})
target_include_directories(tests PRIVATE include)

