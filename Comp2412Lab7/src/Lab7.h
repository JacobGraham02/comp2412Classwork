/*
 * Lab7.h
 *
 *  Created on: Mar. 9, 2022
 *      Author: JakeG
 */

#ifndef LAB7_H_
#define LAB7_H_

struct Node {
	Node* right;
	Node* left;
	int intArray[5];
};

class Lab7 {
	Node* root;

public:
	Lab7();
	~Lab7();
	void generateArrayOf200RandomIntegers();
	Node* insert(int[], Node*);
	Node* makeEmpty(Node*);
	Node* findMinimum(Node*);
	Node* findMaximum(Node*);
	void printInOrder(Node*);
	int calculateSumOfArrayValues(int[]);

	void insert(int arrayOfIntegers[5]) {
		root = insert(arrayOfIntegers, root);
	}

	void printAllElements() {
		printInOrder(root);
	}

	int arrayOf200RandomIntegers[200];
};



#endif /* LAB7_H_ */
