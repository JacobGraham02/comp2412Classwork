/*
 * Problem6.cpp
 *
 *  Created on: Mar. 2, 2022
 *      Author: JakeG
 */
#include "Problem6.h"
#include <iostream>
#include <string>
#include <algorithm>

void printArray() {

}
int* Heap::generate100RandomIntegers() {
	srand(time(0)); // Seeding the time which allows the rand() function to use a
	// new state each time an algorithm that generates pseudo-random integers is called,
	// thus generating new integers and not the same sequence.

	for (int i = 0; i < 100; i++) {
		this->arrayOfSortedIntegers[i] = (rand() % 100) + 1; // Generate numbers between 1 and 100
	}

	return arrayOfSortedIntegers;
}

void Heap::convertArrayToHeap(int arr[], int sizeOfHeap, int parentNodeOfHeap) {
	int largestRoot = parentNodeOfHeap;
	int leftChildNode = 2 * parentNodeOfHeap + 1;
	int rightChildNode = 2 * parentNodeOfHeap + 2;

	if (leftChildNode < sizeOfHeap && arr[leftChildNode] > arr[largestRoot]) {
		largestRoot = leftChildNode;
	}
	if (rightChildNode < sizeOfHeap && arr[rightChildNode] > arr[largestRoot]) {
		largestRoot = rightChildNode;
	}
	if (largestRoot != parentNodeOfHeap) {
		std::swap(arr[parentNodeOfHeap], arr[largestRoot]);

		convertArrayToHeap(arr, sizeOfHeap, largestRoot);
	}
}

void Heap::buildHeapFromArray(int arr[], int sizeOfHeap) {
	int startIndex = (sizeOfHeap / 2) - 1;

	for (int i = startIndex; i >= 0; i--) {
		convertArrayToHeap(arr, sizeOfHeap, i);
	}
}

void Heap::printHeap(int arr[], int sizeOfHeap) {
	std::cout << "Array representation of heap:\n";

	for (int i = 0; i < sizeOfHeap; i++) {
		if (i % 30 == 0 && i != 0) {
			std::cout << "\n\n";
		}
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
void printIntegersInArray(int arr[]) {
	std::cout << "All of the 100 random generated integers in an array:\n";
	for (int i = 0; i < 100; i++) {
		if (i % 30 == 0 && i != 0) {
			std::cout << "\n\n";
		}
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void findMaximumIntegerInHeap(int heap[]) {
	int maximumIntegers[10] = {0,0,0,0,0,0,0,0,0,0};
	int sizeOfHeap = sizeof(heap) / sizeof(heap[0]);

	std::sort(heap, heap + sizeOfHeap);

	for (int i = 0; i < 10; i++) {
		maximumIntegers[i] = heap[i];
	}

	for (int i = 0; i < 10; i++) {
		std::cout << maximumIntegers[i] << "\n";
	}
}
