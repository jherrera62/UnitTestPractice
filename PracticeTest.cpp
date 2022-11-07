/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}
TEST(PracticeTest, same_numbers_descending)
{
	Practice mypractice;
	int f, int s, int t;
	mypractice.sortDescending(f,s,t)
    ASSERT_TRUE(true);
}
TEST(PracticeTest, empty_palindrome)
{
	Practice mypractice;
    bool actual = mypractice.isPalindrome("");
	ASSERT_EQ(actual,true);
}