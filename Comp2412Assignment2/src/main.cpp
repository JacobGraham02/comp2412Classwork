//============================================================================
// Name        : Comp2412Assignment2.cpp
// Author      : Jacob Graham
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Problem1.h"
#include "Problem1.cpp"
#include "Problem2.h"
#include "Problem2.cpp"


int main() {
	std::string fileStudentName;
	std::string filename("src/studentNameFile.txt");
	LinkedList<std::string> *linkedListString = new LinkedList<std::string>;
//	Queue<int> *firstQueueIntegers = new Queue<int>;
//	Queue<int> *secondQueueIntegers = new Queue<int>;
//
//	std::cout << "Appending the nodes 1 through 10 to the first queue of integers" << std::endl;
//	for (int i = 0; i <= 10; i++) {
//		firstQueueIntegers->enqueue(i);
//	}
//	std::cout << "Here is the printed list of integers that exist in the first queue: ";
//		firstQueueIntegers->display();
//
//	std::cout << "Appending the nodes 11 through 20 to the first queue of integers" << std::endl;
//	for (int i = 11; i <= 20; i++) {
//		secondQueueIntegers->enqueue(i);
//	}
//	std::cout << "Here is the printed list of integers that exist in the first queue: ";
//	secondQueueIntegers->display();
//
//	std::cout << "Appending all of the integers in the second queue to the first queue";
//  	firstQueueIntegers->catQueue(secondQueueIntegers);
////
//	std::cout << "Here is the printed list of integers that exist in the second queue: ";
//	firstQueueIntegers->display();

//	for (int i = 0; i < 10; i++) {
//		linkedListInteger->appendNode(i);
//	}

	std::cout << "Reading names from file\n";
	std::ifstream myNamesFile(filename);

	std::string stringStudentName;
	while (std::getline(myNamesFile, stringStudentName)) {
		linkedListString->appendNode(stringStudentName);
	}
	int sizeOfLinkedList = linkedListString->length;

	int counter = 0;
	int studentScore = 0;
	int studentScoresArray[4];

	while (counter < sizeOfLinkedList) {
		std::cout << "Enter a list of scores for " << linkedListString->getNodeDataAtIndex(counter) << "\nInput 0 for no score\n\n";

		for (int i = 0; i < 4; i++) {
			std::cin >> studentScore;
			studentScoresArray[i] = studentScore;
		}
		linkedListString->getNodeAtIndex(counter)->innerStudentScoresStruct.setStudentScores(studentScoresArray);
		counter++;
	}

	std::cout << "\n";
	double scoreTotal = 0;
	double scoreAverage = 0.0;
	int scoreAverageDivider = 0;
	for (int i = 0; i < sizeOfLinkedList; i++) {
		scoreTotal = 0;
		scoreAverage = 0;
		std::cout << "Student name: " << linkedListString->getNodeDataAtIndex(i);
		std::cout << "\n";
		std::cout << "Student scores: ";
		for (int j = 0; j < 4; j++) {
			std::cout << linkedListString->getNodeAtIndex(i)->innerStudentScoresStruct.getStudentScores()[j] << " ";
			scoreTotal += linkedListString->getNodeAtIndex(i)->innerStudentScoresStruct.getStudentScores()[j];

			if (linkedListString->getNodeAtIndex(i)->innerStudentScoresStruct.getStudentScores()[j] == 0) {
				continue;
			} else {
				scoreAverageDivider += 1;
			}
		}
		scoreAverage = scoreTotal / scoreAverageDivider;
		std::cout << "\n";
		std::cout << "The student score total was: " << scoreTotal;
		std::cout << std::fixed;
		std::cout << std::setprecision(1);
		std::cout << "\n";
		std::cout << "The student score average was: " << scoreAverage;

		std::cout << "\n\n";
	}
	return 0;
}
