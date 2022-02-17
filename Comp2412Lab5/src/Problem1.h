/*
 * Problem1.h
 *
 *  Created on: Feb. 16, 2022
 *      Author: JakeG
 */
#include <string>
struct Node {
	int key;
	Node *left;
	Node *right;
	int height;
};
int* nRandomIntegers(int n);
void createAVLTreeFromIntegers();
Node* insertIntegerIntoAVLTree(Node*, int);
void deleteIntegerFromAVLTree();
void traverseThroughAVLTreeInOrder(Node *);
Node* createNewNode(int);
int max(int, int);
int height(Node *);
Node* rightRotate(Node *);
Node* leftRotate(Node *);
int getBalance(Node *);
Node* insert(Node*, int);


