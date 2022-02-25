#include "Problem4.h"
#include <string>
#include <iostream>

BST::BST() {
    root = NULL;
}

BST::~BST() {
    root = BST::makeEmpty(root);
}
Node* BST::insert(int studentNum, std::string studentName, double studentMark, Node* t) {
	if (t == NULL) {
		t = new Node;
		t->id = studentNum;
		t->name = studentName;
		t->mark = studentMark;
		t->left = t->right = NULL;
	}
	else if (studentMark < t->mark) {
		t->left = insert(studentNum, studentName, studentMark, t->left);
	}
	else if (studentMark > t->mark) {
		t->right = insert(studentNum, studentName, studentMark, t->right);
	}
	return t;
}
Node* makeEmpty(Node* t) {
	if(t == NULL) {
	    return NULL;
	}
	makeEmpty(t->left);
	makeEmpty(t->right);
	delete t;
	return NULL;
}
void printInOrder(Node* t) {
	if (t == NULL) {
		return;
	}
	printInOrder(t->left);
	std::cout << "Id: " << t->id << "Name: " << t->name << "Mark: " << t->mark;
	printInOrder(t->right);
}
