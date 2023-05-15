find_package(GTest REQUIRED)

enable_testing()

add_executable(
  vertex_test
  vertex_test.cpp
)
target_link_libraries(
  vertex_test
  GTest::gtest_main
  4d_visualizer
)

include(GoogleTest)
gtest_discover_tests(vertex_test)

