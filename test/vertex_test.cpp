#include <gtest/gtest.h>

#include "expects.hpp"
#include "vertex.hpp"

// Demonstrate some basic assertions.
TEST(VertexTest, BasicAssertions) {
  // Expect equality.
  // EXPECT_EQ(7 * 6, 42);
  auto a = Vertex(3, 4, 5);
  //std::cerr << a;
  auto b = Vertex(3, 4, 5);
  EXPECT_VEC_EQ(a, b);
}


