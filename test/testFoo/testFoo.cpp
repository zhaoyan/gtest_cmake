#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <string>
#include "../../FooMock.h"
#include "../../Bar.h"

using namespace ::testing;  //using namespace here

class FooTest : public Test { //make fixture name describe the context.
protected:
	void SetUp() override {
		mockFoo = new MockFoo();
	}
	 void TearDown() override {
         delete mockFoo;     
     }
	MockFoo *mockFoo;
};

TEST_F(FooTest, mock_foo_in_bar) {
  
  EXPECT_CALL(*mockFoo, getArbitraryString())
    .Times(1)
    .WillOnce(Return("hello"));

    Bar bar{mockFoo};
    std::string s = "hello";
  EXPECT_EQ(bar.getFooString(), s);

}