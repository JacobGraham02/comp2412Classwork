/*
 * Lab9.cpp
 *
 *  Created on: Mar. 24, 2022
 *      Author: JakeG
 */

#include "Lab9.h"
#include <algorithm>
#include <iostream>
#include <chrono>
#include <iomanip>

Lab9::Lab9() {

}

Lab9::~Lab9() {

}

void Lab9::generateArrayOf5000RandomIntegers0To100000() {
	srand(time(0));

	for (int i = 0; i < 5000; i++) {
		this->arrayOf5000Integers[i] = (rand() % 100000);
	}
}

/**
 * Shell sort first sorts elements that are far apart from each other and successively reduces the interval between the elements to be sorted. The interval between the elements is reduced based on
 * the sequence used.
 */
void Lab9::shellSortWithArray(int arrayOfIntegers[5000]) {
	time_t start, end;

	time(&start);
	// Rearrange the elements in the array at each n/2 intervals: n/2, n/4, n/8, etc.
	for (int interval = 5000 / 2; interval > 0; interval /= 2) {
		for (int i = interval; i < 5000; i += 1) {
			int tempHeldElement = arrayOfIntegers[i];
			int j;
			for (j = i; j >= interval && arrayOfIntegers[j - interval] > tempHeldElement; j -= interval) {
				arrayOfIntegers[j] = arrayOfIntegers[j - interval];
			}
			arrayOfIntegers[j] = tempHeldElement;
		}
	}
	time(&end);

	std::setprecision(2);
	double time_taken = double(end - start);
	std::cout << "The time taken for shell sort to sort an array of 5000 random integers ranging from 0 to 100,000 is " << std::fixed << time_taken << std::setprecision(2) << " seconds.";
}

void Lab9::bubbleSortWithArray(int arrayOfIntegers[5000]) {
	time_t start, end;

	time(&start);

	// Loop which gives access to each array elemnt
	for (int step = 0; step < 5000; ++step) {

		// Loop that compares array elements that have not already been compared. Each time a new element is compared, the loop counter decrements by 1 so that element is not checked again.
		for (int i = 0; i < 5000 - step; ++i) {

			// Comparing 2 adjacent elements. > sorts in ascending order, and < sorts in descending order.
			if (arrayOfIntegers[i] > arrayOfIntegers[i + 1]) {
				// If the elements are determined not to be in the correct order, they are swapped with one another.
				int temporaryArrayInteger = arrayOfIntegers[i];
				arrayOfIntegers[i] = arrayOfIntegers[i + 1];
				arrayOfIntegers[i + 1] = temporaryArrayInteger;
			}
		}
	}
	time(&end);
	double time_taken = double(end - start);
	std::cout << "The time taken for bubble sort to sort an array of 5000 random integers ranging from 0 to 100,000 is " << std::fixed << time_taken << std::setprecision(2) << " seconds.";
}
