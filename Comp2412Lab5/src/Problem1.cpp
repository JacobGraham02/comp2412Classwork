/*
 * Problem1.cpp
 *
 *  Created on: Feb. 16, 2022
 *      Author: JakeG
 */

#include "Problem1.h"
#include <time.h>
#include <iostream>
#include <algorithm>
#include <memory>
#include <string>

int* nRandomIntegers(int n) {
	srand(time(0));

	int *dynamicArrayOfIntegers = new int[n];

	for (int i = 0; i < n; i++) {
		dynamicArrayOfIntegers[i] = (rand() % 100) + 1;
	}

	delete [] dynamicArrayOfIntegers;

	return dynamicArrayOfIntegers;
}

int height(Node *node) {
	if (node == NULL) {
		return 0;
	}
	return node->height;
}
int max(int nodeA, int nodeB) {
	return (nodeA > nodeB) ? nodeA : nodeB;
}
Node* createNewNode(int key) {
	Node *newNode = new Node();
	newNode->key = key;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->height = 1;
	return newNode;
}
// A utility function to right
// rotate subtree rooted with y
// See the diagram given above.
Node *rightRotate(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left),
                    height(y->right)) + 1;
    x->height = max(height(x->left),
                    height(x->right)) + 1;

    // Return new root
    return x;
}
// A utility function to left
// rotate subtree rooted with x
// See the diagram given above.
Node *leftRotate(Node *x)
{
    Node *y = x->right;
    Node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left),
                    height(x->right)) + 1;
    y->height = max(height(y->left),
                    height(y->right)) + 1;

    // Return new root
    return y;
}
int getBalance(Node *node) {
	if (node == NULL) {
		return 0;
	}
	return height(node->left) - height(node->right);
}
Node* insertIntegerIntoAVLTree(Node* node, int key)
{
    /* 1. Perform the normal BST insertion */
    if (node == NULL)
        return(createNewNode(key));

    if (key < node->key)
        node->left = insertIntegerIntoAVLTree(node->left, key);
    else if (key > node->key)
        node->right = insertIntegerIntoAVLTree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max(height(node->left),
                        height(node->right));

    /* 3. Get the balance factor of this ancestor
        node to check whether this node became
        unbalanced */
    int balance = getBalance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
void traverseThroughAVLTreeInOrder(Node *root) {
	if (root == NULL) {
		return;
	}
	traverseThroughAVLTreeInOrder(root->left);

	std::cout << root->key << " ";

	traverseThroughAVLTreeInOrder(root->right);
}
