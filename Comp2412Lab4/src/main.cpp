//============================================================================
// Name        : Comp2412Lab4.cpp
// Author      : Jacob Graham
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Lab4.h"
using namespace std;

int main() {
	Lab4 variableLab4 = Lab4();
	int* integerList;
	integerList = variableLab4.createArrayOfIntegersSizeN(300);
	int sizeOfIntegerList = 300;
	int firstIntegerListElement = 0;
	std::cout << "\n\n\n";
	std::cout << "The index location of 50 in integer list is: " << variableLab4.binarySearch(integerList, firstIntegerListElement, sizeOfIntegerList, 50) <<  '\n';
	std::cout << "The index location of 38 in integer list is: " << variableLab4.binarySearch(integerList, firstIntegerListElement, sizeOfIntegerList, 38) <<  '\n';
	std::cout << "The index location of 24 in integer list is: " << variableLab4.binarySearch(integerList, firstIntegerListElement, sizeOfIntegerList, 24) <<  '\n';
	std::cout << "The index location of 1 in integer list is: " << variableLab4.binarySearch(integerList, firstIntegerListElement, sizeOfIntegerList, 1) <<  '\n';
	std::cout << "The index location of 62 in integer list is: " << variableLab4.binarySearch(integerList, firstIntegerListElement, sizeOfIntegerList, 62) <<  '\n';
	std::cout << "The index location of 64 in integer list is: " << variableLab4.binarySearch(integerList, firstIntegerListElement, sizeOfIntegerList, 64) <<  '\n';
	std::cout << "The index location of 128 in integer list is: " << variableLab4.binarySearch(integerList, firstIntegerListElement, sizeOfIntegerList, 128) <<  '\n';
	std::cout << "The index location of 282 in integer list is: " << variableLab4.binarySearch(integerList, firstIntegerListElement, sizeOfIntegerList, 282) <<  '\n';
	std::cout << "The index location of 512 in integer list is: " << variableLab4.binarySearch(integerList, firstIntegerListElement, sizeOfIntegerList, 512) <<  '\n';
	return 0;
}
