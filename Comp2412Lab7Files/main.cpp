//============================================================================
// Name        : Comp2412Lab7.cpp
// Author      : Jacob Graham
// Version     :
// Copyright   : © Copyright 2022 Jacob Graham. All rights reserved.
// Description : Lab 7 for Comp 2412 Data Structures @ Lakehead University
//============================================================================

#include <iostream>
#include <algorithm>
#include "Lab7.h"

//for (int i = 0; i < 100; i++) {
//		integerArray[i] = *(arrayOfIntegers + i);
//	}
int main() {
	Lab7 lab7 = Lab7();
	int tempArray[5];
	int* arrayOf200RandomIntegers;
	int integerArray[200];

	lab7.generateArrayOf200RandomIntegers();
	arrayOf200RandomIntegers = lab7.arrayOf200RandomIntegers;

	for (int i = 0; i < 200; i++) {
		integerArray[i] = *(arrayOf200RandomIntegers + i);
	}

	for (int i = 0; i < 200; i++) {
		if (i % 5 == 0 && i != 0) {
			tempArray[0] = integerArray[i];
			tempArray[1] = integerArray[i-1];
			tempArray[2] = integerArray[i-2];
			tempArray[3] = integerArray[i-3];
			tempArray[4] = integerArray[i-4];
			tempArray[5] = integerArray[i-5];
			int sizeOfTempArray = sizeof(tempArray) / sizeof(tempArray[0]);
			std::sort(tempArray, tempArray + sizeOfTempArray);
			lab7.insert(tempArray);
		}
	}

	lab7.printAllElements();

	return 0;
}
