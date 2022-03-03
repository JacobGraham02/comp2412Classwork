/*
 * Problem6.h
 *
 *  Created on: Mar. 2, 2022
 *      Author: JakeG
 */

#ifndef PROBLEM6_H_
#define PROBLEM6_H_

class Heap {
public:
	int* generate100RandomIntegers();
	void convertArrayToHeap(int[], int, int);
	void buildHeapFromArray(int[], int);
	void printHeap(int[], int);
private:
	int arrayOfSortedIntegers[100];
};
void printIntegersInArray(int[]);
void findMaximumIntegerInHeap(int[]);

#endif /* PROBLEM6_H_ */
