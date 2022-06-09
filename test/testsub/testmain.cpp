#include "gtest/gtest.h"
#include "../../sub.h"

TEST(SubTest, Positive){
		EXPECT_EQ(1,Sub(3,2));
		EXPECT_EQ(1,Sub(4,3));
}

TEST(SubTest, Negative){
		EXPECT_EQ(-1,Sub(2,3));
}
