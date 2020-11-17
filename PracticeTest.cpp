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

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_plaindrome){
	Practice obj;
	bool actual = obj.isPalindrome("racecar");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_plaindrome_with_random_caps){
	Practice obj;
	bool actual = obj.isPalindrome("TAcOcAt");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_plaindrome){
	Practice obj;
	bool actual = obj.isPalindrome("");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_symbolic_plaindrome){
	Practice obj;
	bool actual = obj.isPalindrome("#@$%%$@#");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_symbolic_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome("%^#$@");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_mix_sybmolic_alpha_plaindrome){
	Practice obj;
	bool actual = obj.isPalindrome("T@cOc@t");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_in_Descending_order){
	Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
	obj.sortDescending(first, second, third);
	bool actual;
	if(first > second && second > third){
		actual = true;
	}
	else{
		actual = false;
	}
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_in_1_3_2_order){
	Practice obj;
	int first = 1;
	int second = 3;
	int third = 2;
	obj.sortDescending(first, second, third);
	bool actual;
	if(first > second && second > third){
		actual = true;
	}
	else{
		actual = false;
	}
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_in_2_3_1_order){
	Practice obj;
	int first = 2;
	int second = 3;
	int third = 1;
	obj.sortDescending(first, second, third);
	bool actual;
	if(first > second && second > third){
		actual = true;
	}
	else{
		actual = false;
	}
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_in_2_1_3_order){
	Practice obj;
	int first = 2;
	int second = 1;
	int third = 3;
	obj.sortDescending(first, second, third);
	bool actual;
	if(first > second && second > third){
		actual = true;
	}
	else{
		actual = false;
	}
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_in_4657_2455643_69696_order){
	Practice obj;
	int first = 4657;
	int second = 2455643;
	int third = 69696;
	obj.sortDescending(first, second, third);
	bool actual;
	if(first > second && second > third){
		actual = true;
	}
	else{
		actual = false;
	}
	ASSERT_TRUE(actual);
}
