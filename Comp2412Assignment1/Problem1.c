//
// Created by JakeG on 2022-01-28.
//
#include "Problem1.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <stddef.h>

bool pushStack(STACK* stack, int integerData) {
    STACK_NODE* newPointer;
    newPointer = (STACK_NODE*)malloc(sizeof(STACK_NODE));
    if (!newPointer) {
        return false;
    }
    newPointer->nodeIntegerData = integerData;
    newPointer->pointerToNode = stack->topOfStack;
    stack->topOfStack = newPointer;
    (stack->numberOfItems)++;
    return true;
}

int* popStack(STACK* stack) {
    int* dataOutputPointer;
    STACK_NODE* temp;
    if (stack->numberOfItems = 0) {
        dataOutputPointer = NULL;
    } else {
        temp = stack->topOfStack;
        dataOutputPointer = stack->topOfStack->nodeIntegerData;
        stack->topOfStack = stack->topOfStack->pointerToNode;
        free(temp);
        (stack->numberOfItems)--;
    }
    return dataOutputPointer;
}

int returnArrayIntegersFromFile(FILE *myFile) {
    int integerArray[9];
    int integerArrayCounter;
    FILE* fileToReadIntegersFrom;

    fileToReadIntegersFrom = fopen(myFile, "r");

    for (integerArrayCounter = 0; integerArrayCounter < sizeof(integerArray) / sizeof(integerArray[0]); integerArrayCounter++) {
        fscanf(fileToReadIntegersFrom, "%d,", &integerArray[integerArrayCounter]);
    }
    for (integerArrayCounter = 0; integerArrayCounter < sizeof(integerArray) / sizeof(integerArray[0]); integerArrayCounter++) {
        printf("Number from file is: %d\n\n", integerArray[integerArrayCounter]);
    }
    return integerArray;
}
int reverseArrayOfIntegers(int* arrayOfIntegers) {
    int reversedIntegerArray[9];
    int lastElementInArrayLocation = sizeof(reversedIntegerArray) / sizeof(reversedIntegerArray[0]) - 1;

    for (int i = 0; i <= lastElementInArrayLocation; i++) {
        reversedIntegerArray[i] = arrayOfIntegers[lastElementInArrayLocation - i];
    }

    for (int i = 0; i < (sizeof(reversedIntegerArray) / sizeof(reversedIntegerArray[0])); i++) {
        printf("%d\n", reversedIntegerArray[i]);
    }
}

