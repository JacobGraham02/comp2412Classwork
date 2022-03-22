/*
 * main.cpp
 *
 *  Created on: Mar. 15, 2022
 *      Author: JakeG
 */

#include <iostream>
#include <algorithm>
#include "Problem5.h"

int main() {
	Problem5 problem5 = Problem5();
	int arrayOfNodeIntegers[7];
	int* arrayOf100RandomIntegers;
	int integerArrayRandomNumbers[100];

	problem5.generateArrayOf100RandomIntegers();
	arrayOf100RandomIntegers = problem5.arrayOf100RandomIntegers;

	for (int i = 0; i < 100; i++) {
		integerArrayRandomNumbers[i] = *(arrayOf100RandomIntegers + i);
	}

	for (int i = 0; i < 200; i++) {
		if (i % 7 == 0 && i != 0) {
			arrayOfNodeIntegers[0] = integerArrayRandomNumbers[i];
			arrayOfNodeIntegers[1] = integerArrayRandomNumbers[i-1];
			arrayOfNodeIntegers[2] = integerArrayRandomNumbers[i-2];
			arrayOfNodeIntegers[3] = integerArrayRandomNumbers[i-3];
			arrayOfNodeIntegers[4] = integerArrayRandomNumbers[i-4];
			arrayOfNodeIntegers[5] = integerArrayRandomNumbers[i-5];
			arrayOfNodeIntegers[6] = integerArrayRandomNumbers[i-6];
			arrayOfNodeIntegers[7] = integerArrayRandomNumbers[i-7];
			int sizeOfArrayNodeIntegers = sizeof(arrayOfNodeIntegers) / sizeof(arrayOfNodeIntegers[0]);
			std::sort(arrayOfNodeIntegers, arrayOfNodeIntegers + sizeOfArrayNodeIntegers);
			problem5.insert(arrayOfNodeIntegers);
		}
	}
	std::cout << "Traverse function display of B-tree of order 7 with 7 integer members per Node (100 random integers generated from 1 to 100): ";
	std::cout << "\n\n";
	problem5.printAllElements();

	return 0;
}

