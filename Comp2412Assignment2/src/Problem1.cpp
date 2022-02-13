/*
 * Problem1.cpp
 *
 *  Created on: Feb. 10, 2022
 *      Author: Jacob Graham
 */
#include <iostream>
#include "Problem1.h"

///**
// * Constructs an empty Queue which holds data types of type T. Both the front and rear of Queue are assigned as being null pointers.
// */
//template<typename T>
//Queue<T>::Queue() {
//	this->front = nullptr;
//	this->rear = nullptr;
//	this->length = 0;
//}
///**
// * Destructs an existing Queue which hold data types of type T. This destructor starts at the rear Node, iterates through all of the Nodes until it reaches a Node defined as nullptr, and
// * deletes the memory space at this location in the Queue.
// */
//template<typename T>
//Queue<T>::~Queue() {
//	Node<T> *rear = this->rear;
//	Node<T> *current = nullptr;
//
//	while (rear != nullptr) {
//		current = rear;
//		rear = rear->next;
//		delete current;
//	}
//}
///**
// * Adds a new Node with data type T to the rear element of a pre-existing Queue. If the Queue is currently empty (the first element in Queue is pointing to null), both the front and back of
// * queue will be assigned the Node that is enqueued to the Queue.
// */
//template<typename T>
//void Queue<T>::enqueue(T data) {
//	Node<T> *temp = new Node<T>;
//	temp->data = data;
//
//	if (this->rear == nullptr) {
//		this->rear = temp;
//		this->front = temp;
//	} else {
//		this->rear->next = temp;
//		this->rear = temp;
//	}
//	this->length++;
//}
//
///**
// * Dequeue removes an element of data type T from the front of the Queue. If the Node at the front of the Queue is a null pointer, a null pointer Node will be returned.
// * Else, the Node at the existing front location of the Queue will be returned from the function, and that location in memory will be deleted, to signify element deletion.
// */
//template<typename T>
//Node<T> Queue<T>::dequeue() {
//	if (this->front == nullptr) {
//		return nullptr;
//	} else {
//		Node<T> *frontNode = this->front;
//		this->front = this->front->next;
//		delete this->front;
//		return frontNode;
//	}
//}
///**
// * Starts at the front element of the Queue, and traverses until the rear element, or when it reaches a Node that is a null pointer. Each time an iteration occurs, the data of type T is
// * printed out to the console, and the Node to be printed is assigned the value of the Node that is next to it in the Queue.
// */
//template<typename T>
//void Queue<T>::display() {
//	Node<T> *frontNode = this->front;
//
//	while (frontNode != nullptr) {
//		std::cout << frontNode->data << ' ';
//		frontNode = frontNode->next;
//	}
//	std::cout << std::endl;
//}
///**
// * Concatenates a Queue to another Queue. Both Queues have to be of the same data type T, or else the concatenation will not work. First, a Node is retrieved from the front of the
// * secondQueue, and a while loop is used as while the front Node of the second Queue is not equal to a null pointer, the Node at the specified location in the second Queue is enqueued to
// * the first Queue. In each iteration of the while loop, the Node is incremented to the next location in the second Queue.
// */
//template<typename T>
//void Queue<T>::catQueue(Queue<T> *secondQueue) {
//	Node<T> *frontNodeOfSecondQueue = secondQueue->front;
//	while (frontNodeOfSecondQueue != nullptr) {
//		enqueue(frontNodeOfSecondQueue->data);
//		frontNodeOfSecondQueue = frontNodeOfSecondQueue->next;
//	}
//}
///**
// * Returns if the Queue variable length is equal to 0
// */
//template<typename T>
//bool Queue<T>::isEmpty() {
//	return this->length == 0;
//}




