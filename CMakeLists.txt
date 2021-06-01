CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD_11)
list( APPEND CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")




ADD_EXECUTABLE(recommend
main.cpp
menu.cpp
mainFunctions.cpp
category.cpp
display.cpp
Scan.cpp
movies.cpp
)

ADD_EXECUTABLE(test
unit_test.cpp
category.cpp
display.cpp
Scan.cpp
movies.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
