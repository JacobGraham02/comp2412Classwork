//============================================================================
// Name        : Comp2412Lab5.cpp
// Author      : Jacob Graham
// Version     :
// Copyright   : © Copyright 2022 Jacob Graham. All rights reserved.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Problem1.h"

using namespace std;

/**
 * //	for (int i = 0; i < 300; i++) {
//		std::cout << *(arrayOfSortedIntegers + i) << ' ';
//	}
//	int arrayOfSortedIntegersSize = sizeof(arrayOfSortedIntegers) / sizeof(arrayOfSortedIntegers[0]);
 */
int main() {
	int* arrayOfIntegers;
	int integerArray[100];

	arrayOfIntegers = nRandomIntegers(100);

	for (int i = 0; i < 100; i++) {
		integerArray[i] = *(arrayOfIntegers + i);
	}

	std::cout << "Integer array for AVL before printing in order: \n ";
	for (int i = 0; i < 100; i++) {
		std::cout << integerArray[i] << " ";
		if (i != 0 and i % 30 == 0) {
			std::cout << "\n";
		}
	}
	std::cout << "\n\n";

	Node *root = NULL;

	std::cout << "Inserting the 100 random integers into an AVL data structure\n\n";
	for (int i = 0; i < 100; i++) {
		root = insertIntegerIntoAVLTree(root, integerArray[i]);
	}
	std::cout << "Printing the AVL structure integers in order: \n";
	traverseThroughAVLTreeInOrder(root);

	return 0;
}
