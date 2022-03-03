//============================================================================
// Name        : Comp2412Lab6.cpp
// Author      : Jacob Graham
// Version     :
// Copyright   : © Copyright 2022 Jacob Graham. All rights reserved.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Problem6.h"
using namespace std;

// TODO: Find the 10 largest numbers in the heap.

int main() {
	Heap heap = Heap();
	int* arr;
	int* arrayFromFindMaximumInteger;
	int arrayFromPointer[100];
	arr = heap.generate100RandomIntegers();

	for (int i = 0; i < 100; i++) {
		arrayFromPointer[i] = *(arr + i);
	}
	printIntegersInArray(arrayFromPointer);
	std::cout << "\n\n";

	heap.buildHeapFromArray(arrayFromPointer, 100);
	heap.printHeap(arrayFromPointer, 100);
	std::cout<<"\n";

	std::cout<<("The ten largest integers which exist in this heap:\n");
	findMaximumIntegerInHeap(arrayFromPointer);

	return 0;
}
