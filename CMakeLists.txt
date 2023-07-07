cmake_minimum_required(VERSION 3.0)

project(my_class)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fmax-errors=5")

set(CMAKE_BUILD_TYPE debug)

find_package(GTest REQUIRED)

include_directories(
  ${GTEST_INCLUDE_DIRS}
  ${PROJECT_SOURCE_DIR}/include
)

set(SRC
  ${PROJECT_SOURCE_DIR}/src/my_class.cc
)

add_executable(my_class src/main.cc ${SRC})
add_executable(tests tests/tests.cc ${SRC})
target_link_libraries(tests ${GTEST_LIBRARIES} pthread)


