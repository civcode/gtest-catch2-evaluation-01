cmake_minimum_required(VERSION 3.0)

project(my_class)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fmax-errors=5")

set(CMAKE_BUILD_TYPE debug)

find_package(GTest REQUIRED)


include_directories(
  ${GTEST_INCLUDE_DIRS}
  ${CMAKE_SOURCE_DIR}/include
)

set(SRC
  ${CMAKE_SOURCE_DIR}/src/my_class.cc
)

add_executable(my_class src/main.cc ${SRC})
add_executable(gtest_tests tests/gtest_tests.cc ${SRC})
target_link_libraries(gtest_tests ${GTEST_LIBRARIES} pthread)


add_subdirectory(lib/Catch2)
add_executable(catch2_tests 
  ${SRC}
  ${CMAKE_SOURCE_DIR}/tests/catch2_main.cc
  ${CMAKE_SOURCE_DIR}/tests/catch2_tests.cc
)
target_link_libraries(catch2_tests PRIVATE Catch2::Catch2)
#target_link_libraries(catch2_tests PRIVATE Catch2::Catch2WithMain)

