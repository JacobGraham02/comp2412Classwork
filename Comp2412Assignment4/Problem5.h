/*
 * Problem4.h
 *
 *  Created on: Mar. 15, 2022
 *      Author: JakeG
 */

#ifndef PROBLEM5_H_
#define PROBLEM5_H_

struct Node {
	Node* right;
	Node* left;
	int intArray[7];
};

class Problem5 {
	Node* root;

public:
	Problem5();
	~Problem5();
	void generateArrayOf100RandomIntegers();
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

	int arrayOf100RandomIntegers[200];
};


#endif /* PROBLEM5_H_ */
