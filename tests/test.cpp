#include <gtest/gtest.h>
#include "B.h"

TEST(BTest, first_test)
{
	B b;
	int result = b.call_sum(12, 10);
	EXPECT_EQ(result, 22);
	result = b.call_sum(10, 10);
	EXPECT_EQ(result, 19);
}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
