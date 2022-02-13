/*
 * Problem2.cpp
 *
 *  Created on: Feb. 11, 2022
 *      Author: JakeG
 */
#include <iostream>
#include "Problem2.h"


template <typename T>
LinkedList<T>::LinkedList() {
	this->length = 0;
	this->head = nullptr;
	this->tail = nullptr;
}
template<typename T>
LinkedList<T>::~LinkedList() {
	Node<T> *next = this->head;
	Node<T> *current = nullptr;

	while (next != nullptr) {
		current = next;
		next = next->next;
		delete current;
	}
	std::cout << "All nodes in the linked list were deleted" << std::endl;
}
template<typename T>
void LinkedList<T>::appendNode(T data) {
	Node<T> *node = nullptr;
	if (isEmpty()) {
		node = new Node<T>;
		this->head = node;
	} else {
		node = this->tail;
		node->next = new Node<T>;
		node = node->next;
	}
	node->data = data;
	node->next = nullptr;
	this->tail = node;
	this->length++;
}
template<typename T>
void LinkedList<T>::deleteNodeAt(int index) {
	if (index < 0 || index >= this->length) {
		throw std::out_of_range("You cannot access a linked list at this index because it does not exist");
	} else {
		Node<T> *node = this->head;
		if (index == 0) {
			this->head = node->next;
			delete node;
			if (isEmpty()) {
				this->tail = nullptr;
			}
		} else {
			for (int i = 0; i < index - 1; i++) {
				node = node->next;
			}
			Node<T> *tempNode = node->next;
			node->next = node->next->next;
			delete tempNode;
			if (index == this->length - 1) {
				this->tail = node;
			}
		}
		this->length--;
	}
}
template<typename T>
void LinkedList<T>::printList() {

	if (isEmpty()) {
		throw std::out_of_range("You cannot print any nodes from any empty list");
	} else {
		Node<T> *node = this->head;
		while (node != nullptr) {
			std::cout << node->data << ' ';
			node = node->next;
		}
		std::cout << std::endl;
	}
}
template<typename T>
T LinkedList<T>::getNodeDataAtIndex(int index) {
	Node<T> *node = this->head;
	for (int i = 0; i < index; i++) {
		node = node->next;
	}
	return node->data;
}
template<typename T>
Node<T>* LinkedList<T>::getNodeAtIndex(int index) {
	Node<T> *node = this->head;
	for (int i = 0; i < index; i++) {
		node = node->next;
	}
	return node;
}
template<typename T>
int LinkedList<T>::getNodeIndexAtValue(T value) {
	int indexOfNode = 0;
	Node<T> *node = this->head;
	while (node != nullptr) {
		indexOfNode++;
		if (node->data == value) {
			return indexOfNode;
		}
		node = node->next;
	}
	return -1;
}
template<typename T>
bool LinkedList<T>::isEmpty() {
	return this->head == nullptr;
}
