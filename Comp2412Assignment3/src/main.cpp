////============================================================================
//// Name        : Comp2412Assignment3.cpp
//// Author      : Jacob Graham
//// Version     :
//// Copyright   : © Copyright 2022 Jacob Graham. All rights reserved.
//// Description : Hello World in C++, Ansi-style
////============================================================================
#include <iostream>
#include "Problem4.h"
int main() {
	int idArray[17] = {12343, 12393, 12309, 12311, 12376, 12389, 12356, 12357, 12305, 12313, 12323, 12378, 12345, 12387, 12377, 12366, 1244};
	std::string namesArray[17] = {"Ben Jones", "Fazil Miami", "Bob can", "Maggie Ross", "Rath Kosirog", "Brad Rathke", "Sally Smith", "John Attia", "Chris Reisbeck", "William Crouch", "Emel Uckan", "North Betz",
	"Penn Purdue", "Marg Hafen", "Diana Dovolis", "Tod Breedlove", "Hill Hafen"};
	double marksArray[17] = {84.50, 98.00, 45.50, 65.08, 78.50, 85.00, 78.40, 69.50, 88.00, 65.50, 56.50, 77.50, 66.50, 83.50, 68.50, 73.60, 55.50};

	BST test = BST();
	Node *testNode = new Node();

	testNode->id = idArray[0];
	testNode->name = namesArray[0];
	testNode->mark = marksArray[0];

	std::cout << "Id	Name	Mark\n";
	for (int i = 0; i < 17; i++) {
		testNode->id = idArray[i];
		testNode->name = namesArray[i];
		testNode->mark = marksArray[i];
		test.insert(testNode);
	}
	return 0;
}
