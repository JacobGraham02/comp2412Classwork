/*
 * Problem4.cpp
 *
 *  Created on: Mar. 15, 2022
 *      Author: JakeG
 */
#include "Problem4.h"
#include <iostream>
#include <algorithm>

/**
 * Generates an array of 100 random integers and places them in a location in the computers memory. Uses a random seeded time when using the rand() algorithm to guarantee psuedo-random
 * integer generation each time that function is called.
 */
void Problem4::generateArrayOf100RandomIntegers() {
	srand(time(0)); // Seeding time which allows the srand (seed random) function to use a new state in the pseudo-random integer algorithm. Thus, new integers are generated each time the algorithm runs.

	for (int i = 0; i < 100; i++) {
		this->arrayOf100RandomIntegers[i] = (rand() % 100) + 1; // Integers generated between 1 and 100
	}
}
/**
 * Constructor which initializes the root node of the tree to null
 */
Problem4::Problem4() {
	root = NULL;
}
/**
 * Destructor which sets all nodes in the tree to null
 */
Problem4::~Problem4() {
	root = makeEmpty(root);
}
/**
 * Inserts a node into the tree. Each node has an array of 7 integers associated with it.
 * If the node to insert is null, it is initialized and the nodes data (array of 7 integers) is set with the array parameter passed into the function.
 * The right and left child of node is set to null, and one of the following conditions can occur:
 * If the sum of the array parameter value is greater than the array values currently in the node, the node is inserted as a right child node to the root node
 * If the sum of the array parameter value is less than the array values currently in the node, the node is inserted as a left child node to the root node
 */
Node* Problem4::insert(int arrayOfIntegers[7], Node* nodeToInsert) {
	if (nodeToInsert == NULL) {
		nodeToInsert = new Node;
		for (int i = 0; i < 7; i++) {
			nodeToInsert->intArray[i] = *(arrayOfIntegers + i);
		}
		nodeToInsert->left = nodeToInsert->right = NULL;
	}

	int sumOfArrayValuesInNode = calculateSumOfArrayValues(nodeToInsert->intArray);
	int sumOfArrayValuesInArray = calculateSumOfArrayValues(arrayOfIntegers);

	if (sumOfArrayValuesInArray < sumOfArrayValuesInNode) {
		nodeToInsert->left = insert(arrayOfIntegers, nodeToInsert->left);
	}
	else if (sumOfArrayValuesInArray > sumOfArrayValuesInNode) {
		nodeToInsert->right = insert(arrayOfIntegers, nodeToInsert->right);
	}
	return nodeToInsert;
}
/**
 * Recursively loops through all of the nodes in the tree and sets them all to null, deleting the reference to that specific deleted node and reclaiming memory.
 */
Node* Problem4::makeEmpty(Node* nodeReference) {
	if (nodeReference == NULL) {
		return NULL;
	}
	makeEmpty(nodeReference->left);
	makeEmpty(nodeReference->right);
	delete nodeReference;
	return NULL;
}
/**
 * Loops through each of the integers in a node integer array and calculates the total value of each number added together in the array
 */
int Problem4::calculateSumOfArrayValues(int arrayOfIntegers[7]) {
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		sum += arrayOfIntegers[i];
	}
	return sum;
}
/**
 * Uses an in-order print implementation to print all of the nodes in the tree starting at the root node. The method is recursively called with a reference to both the nodes left and right child.
 */
void Problem4::printInOrder(Node* nodeReference) {
	if (nodeReference == NULL) {
		return;
	}
	printInOrder(nodeReference->left);
	std::cout << "Node: ";
	for (int i = 0; i < 7; i++) {
		std::cout << nodeReference->intArray[i] << " ";
	}
	std::cout << "\n";
	printInOrder(nodeReference->right);
}



