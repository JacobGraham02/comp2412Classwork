//============================================================================
// Name        : Comp2412Lab9.cpp
// Author      : Jacob Graham
// Version     :
// Copyright   : © Copyright 2022 Jacob Graham. All rights reserved.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include "Lab9.h"
using namespace std;

int main() {
	Lab9 lab9 = Lab9();
	int* temporaryArrayOf5000Integers;
	int randomIntegerArray[50000];

	lab9.generateArrayOf50000RandomIntegers0To100000();

	temporaryArrayOf5000Integers = lab9.arrayOf50000Integers;

	for (int i = 0; i < 50000; i++) {
		randomIntegerArray[i] = *(temporaryArrayOf5000Integers + i);
	}

	lab9.shellSortWithArray(randomIntegerArray);
	std::cout << "\n\n";
	lab9.bubbleSortWithArray(randomIntegerArray);

	return 0;
}
