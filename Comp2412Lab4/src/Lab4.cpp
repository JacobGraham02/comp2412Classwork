/*
 * Lab4.cpp
 *
 *  Created on: Feb. 11, 2022
 *      Author: JakeG
 */
#include "Lab4.h"
#include <time.h>
#include <iostream>
#include <algorithm>


Lab4::Lab4() {

}

Lab4::~Lab4() {

}

int* Lab4::createArrayOfIntegersSizeN(int sizeOfIntegerArray) {
	srand(time(0));

	std::cout << "Generating 300 random numbers between 1 and 1000\n\n";
	for (int i = 0; i < sizeOfIntegerArray; i++) {
		this->arrayOfSortedIntegers[i] = (rand() % 1000) + 1;
		std::cout << (rand() % 1000) + 1 << ' ';
		if (i % 31 == 0 && i > 1) {
			std::cout << "\n\n";
		}
	}
	std::cout << "\n\n";

	int integerArraySize = sizeof(arrayOfSortedIntegers) / sizeof(arrayOfSortedIntegers[0]);
	std::sort(arrayOfSortedIntegers, arrayOfSortedIntegers + integerArraySize);

	std::cout << "Printing a sorted version of the 300 random numbers between 1 and 1000\n\n";
	for (int i = 0; i < sizeOfIntegerArray; i++) {
		std::cout << arrayOfSortedIntegers[i] << ' ';
		if (i % 31 == 0 && i > 1) {
			std::cout << "\n\n";
		}
	}
	return arrayOfSortedIntegers;
}

int Lab4::binarySearch(int * arrayOfSortedIntegers, int firstIntegerListItemLocation, int sizeOfIntegerList, int numToSearchFor) {
//	for (int i = 0; i < 300; i++) {
//		std::cout << *(arrayOfSortedIntegers + i) << ' ';
//	}
//	int arrayOfSortedIntegersSize = sizeof(arrayOfSortedIntegers) / sizeof(arrayOfSortedIntegers[0]);
	if (firstIntegerListItemLocation <= sizeOfIntegerList) {
		int middleOfList = (firstIntegerListItemLocation + sizeOfIntegerList) / 2;

		if (arrayOfSortedIntegers[middleOfList] == numToSearchFor) {
			return middleOfList;
		}
		if (arrayOfSortedIntegers[middleOfList] > numToSearchFor) {
			return binarySearch(arrayOfSortedIntegers,firstIntegerListItemLocation,middleOfList-1,numToSearchFor);
		}
		if (arrayOfSortedIntegers[middleOfList] < numToSearchFor) {
			return binarySearch(arrayOfSortedIntegers,middleOfList+1,sizeOfIntegerList,numToSearchFor);
		}
	}
	return -1;
}

