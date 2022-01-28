//
// Created by JakeG on 2022-01-28.
//

#ifndef COMP2412ASSIGNMENT1_PROBLEM1_H
#define COMP2412ASSIGNMENT1_PROBLEM1_H

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct node {
    //void* dataPointer;
    struct node* pointerToNode;
    int nodeIntegerData;
} STACK_NODE;
typedef struct {
    int numberOfItems;
    STACK_NODE* topOfStack;
} STACK;

bool pushStack(STACK* stack, int integerData);
int* popStack(STACK* stack);
int returnArrayIntegersFromFile(FILE *myFile);
int* reverseArrayOfIntegersFromFile(int* arrayOfIntegers);

#endif //COMP2412ASSIGNMENT1_PROBLEM1_H
