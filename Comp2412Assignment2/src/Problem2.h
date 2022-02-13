/*
 * Problem2.h
 *
 *  Created on: Feb. 11, 2022
 *      Author: JakeG
 *
 * A header file containing the following:
 * A definition for a dynamic Node. This Node is to be placed inside of a Linked List structure, and grants the created Linked List the ability to dynamically allocate and reallocate its size.
 * A template of type T is preceeding the struct definition of the Node, so that the Node itself can hold any data type.
 *
 * A class Queue which has a template of typename T preceeding its definition, which defines the class as being able to handle various types of data instead of only one.
 * This class only defines the public methods which can be used with a class of type Queue. The properties of this class are listed below:
 * int length : holds the length of the Queue
 * Node<T> rear : holds the rear node of the Queue
 * Node<T> front : holds the front node of the Queue
 *
 * The functions in the class are listed below:
 * Queue() : A constructor for the class
 * ~Queue() : A destructor for the class
 * void enqueue(T) : A function which appends data of type T to the rear of the queue
 * Node<T> dequeue() : A function which removes a Node of type T from the front of the queue
 * void display() : A function which iterates through all Nodes in the Queue and prints the data of each
 * bool isEmpty() : Indicates whether the Queue has any elements
 * void catQueue(Queue<T> *) : Appends all data of type T from one Queue to the caller Queue object.
 *
 */

#ifndef PROBLEM2_H_
#define PROBLEM2_H_

template<typename T>
struct Node {
	T data;
	Node<T>* next;

	struct studentScores {
		void setStudentScores(int* scores) {
			studentScores = scores;
		}
		int* getStudentScores() {
			return studentScores;
		}
		int* studentScores;
	};
	studentScores innerStudentScoresStruct;
};

template<typename T>
class LinkedList {
public:
	int length;
	Node<T> *head;
	Node<T> *tail;

	LinkedList();
	~LinkedList();

	void prependNode(T data);
	void appendNode(T data);
	void deleteNodeAt(int index);
	void printList();
	T getNodeDataAtIndex(int index);
	Node<T>* getNodeAtIndex(int index);
	int getNodeIndexAtValue(T value);
	bool isEmpty();
	int listLength();
	void setNodeStudentScores(int scores[4]);
};



#endif /* PROBLEM2_H_ */
