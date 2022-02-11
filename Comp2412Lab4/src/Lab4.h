/*
 * Lab4.h
 *
 *  Created on: Feb. 11, 2022
 *      Author: JakeG
 */

#ifndef LAB4_H_
#define LAB4_H_

class Lab4 {
public:
	Lab4();
	~Lab4();
	int* createArrayOfIntegersSizeN(int);
	int binarySearch(int*, int, int, int);

private:
	int arrayOfSortedIntegers[300];
};

#endif /* LAB4_H_ */
