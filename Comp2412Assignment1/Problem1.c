//
// Created by JakeG on 2022-01-28.
//
#include "Problem1.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

/**
 * Creates a pointer to the variable of a file (char*), and uses the fopen function to assign all chars read from the file to FILE* pointer.
 * Next, a for loop with fscanf is used to read all of the chars from FILE* in as integers to an integer array.
 * @param myFile the file you wish to read integers from. Integers in the file must be comma-separated. 
 * @return an integer array containing 9 integer entries in the parameter myFile.
 */
int* returnArrayIntegersFromFile(FILE *myFile) {
    static int integerArray[9];
    int integerArrayCounter;
    FILE* fileToReadIntegersFrom;

    fileToReadIntegersFrom = fopen(myFile, "r");

    for (integerArrayCounter = 0; integerArrayCounter < sizeof(integerArray) / sizeof(integerArray[0]); integerArrayCounter++) {
        fscanf(fileToReadIntegersFrom, "%d,", &integerArray[integerArrayCounter]);
    }
    
    return integerArray;
}
/**
 * 
 * @param arrayOfIntegers a pointer which holds the variable value directly from its location in memory.
 * @return a reversed integer array which points to a variable stored at a location in memory. 
 */
int* reverseArrayOfIntegers(int* arrayOfIntegers) {
    static int reversedIntegerArray[9];
    int lastElementInArrayLocation = sizeof(reversedIntegerArray) / sizeof(reversedIntegerArray[0]) - 1;

    for (int i = 0; i <= lastElementInArrayLocation; i++) {
        reversedIntegerArray[i] = arrayOfIntegers[lastElementInArrayLocation - i];
    }
    return reversedIntegerArray;
}

