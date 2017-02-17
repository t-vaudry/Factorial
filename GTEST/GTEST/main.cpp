#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "gtest/gtest.h"

using namespace std;

int factorial(int);

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	int returnValue = RUN_ALL_TESTS();

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
	std::ofstream output;
	output.open("test/test1/test.txt");
	ASSERT_EQ(1, factorial(1));
	output.close();
}

TEST(Factorial, Two) {
	std::ofstream output;
	output.open("test/test2/test.txt");
	ASSERT_EQ(2, factorial(2));
	output.close();
}

TEST(Factorial, NegNum) {
	std::ofstream output;
	output.open("test/test3/test.txt");
	ASSERT_NE(-1, factorial(-1));
	output.close();
}