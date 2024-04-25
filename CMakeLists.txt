# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add main.cpp and test_main.cpp to the project
add_executable(MyProject src/main.cpp)

# Link against GTest
target_link_libraries(MyProject ${GTEST_LIBRARIES} pthread)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests tests/test_main.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

# Set the test name explicitly
add_test(NAME MyTests COMMAND runTests)