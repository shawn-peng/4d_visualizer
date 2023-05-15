#include <gtest/gtest.h>
#include <sstream>

template <typename T>
const std::string &message_vec_ne(const T &a, const T &b) {
	auto ss = std::ostringstream();
	ss << "Vectors not equal: " << a << " != " << b << std::endl;
	return ss.str();
}

#define EXPECT_VEC_EQ(a, b) \
	EXPECT_TRUE(a == b) << message_vec_ne(a, b)

