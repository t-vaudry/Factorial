#include <iostream>
#include <stdlib.h>
#include "gtest/gtest.h"

using namespace std;

int factorial(int);

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	int returnValue = RUN_ALL_TESTS();
	int answer = factorial(4);
	cout << answer << endl;

	system("read");
	return returnValue;
}

int factorial(int a) {
	int answer = 1;
	for (int i = a; i > 0; i--)
		answer *= i;
	return answer;
}

TEST(Factorial, One) {
	ASSERT_EQ(1, factorial(1));
}

TEST(Factorial, Two) {
	ASSERT_EQ(2, factorial(2));
}

TEST(Factorial, NegNum) {
	ASSERT_NE(-1, factorial(-1));
}