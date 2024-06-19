find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test test.cpp)

target_link_libraries(test GTest::GTest GTest::Main B sum)
