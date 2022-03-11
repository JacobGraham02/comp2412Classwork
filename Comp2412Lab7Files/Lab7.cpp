/*
 * Lab7.cpp
 *
 *  Created on: Mar. 9, 2022
 *      Author: JakeG
 *
 * An m-way search tree is a tree in which, for some integer m called the order of the tree, each node of the tree has at most m children.
 *
 * m-way search trees are multi-way trees which are generalised version of binary trees where each node contains multiple elements. Each node contains a maximum of m - 1 elements and m children,
 * where m is the order of the m-way tree.
 */

#include "Lab7.h"
#include <iostream>
#include <algorithm>

void Lab7::generateArrayOf200RandomIntegers() {
	srand(time(0)); // Seeding time which allows the srand (seed random) function to use a new state in the pseudo-random integer algorithm. Thus, new integers are generated each time the algorithm runs.

	for (int i = 0; i < 200; i++) {
		this->arrayOf200RandomIntegers[i] = (rand() % 100) + 1; // Integers generated between 1 and 100
	}
}
Lab7::Lab7() {
	root = NULL;
}
Lab7::~Lab7() {
	root = makeEmpty(root);
}
Node* Lab7::insert(int arrayOfIntegers[5], Node* nodeToInsert) {
	if (nodeToInsert == NULL) {
		nodeToInsert = new Node;
		for (int i = 0; i < 5; i++) {
			nodeToInsert->intArray[i] = *(arrayOfIntegers + i);
		}
		nodeToInsert->left = nodeToInsert->right = NULL;
	}

	int sumOfArrayValuesInNode = Lab7::calculateSumOfArrayValues(nodeToInsert->intArray);
	int sumOfArrayValuesInArray = Lab7::calculateSumOfArrayValues(arrayOfIntegers);

	if (sumOfArrayValuesInArray < sumOfArrayValuesInNode) {
		nodeToInsert->left = insert(arrayOfIntegers, nodeToInsert->left);
	}
	else if (sumOfArrayValuesInArray > sumOfArrayValuesInNode) {
		nodeToInsert->right = insert(arrayOfIntegers, nodeToInsert->right);
	}
	return nodeToInsert;
}
Node* Lab7::makeEmpty(Node* nodeReference) {
	if (nodeReference == NULL) {
		return NULL;
	}
	makeEmpty(nodeReference->left);
	makeEmpty(nodeReference->right);
	delete nodeReference;
	return NULL;
}
int Lab7::calculateSumOfArrayValues(int arrayOfIntegers[5]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arrayOfIntegers[i];
	}
	return sum;
}
void Lab7::printInOrder(Node* nodeReference) {
	if (nodeReference == NULL) {
		return;
	}
	printInOrder(nodeReference->left);
	std::cout << "All 5 integers contained in Node " <<  nodeReference << ": ";

	for (int i = 0; i < 5; i++) {
		std::cout << nodeReference->intArray[i] << " ";
	}
	std::cout << "\n";
	printInOrder(nodeReference->right);
}
