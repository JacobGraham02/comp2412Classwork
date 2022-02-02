/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include "Problem3.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
/**
 * 
You have a stack that's size ten
The user will be able to enter in A
To put a car into the garage(stack)
And also the option to enter d
To take a car out of the garage
The trick is the user might ask to take out the car at the very back
So u would have to remove every car in front of it, take the back car out, and them put all the other cars back in  the same order
And when a car leaves, u have to say how many times did it have to be moved out of the garage
I think he meant that a message should show how many other cars were moved to remove the chosen car from the garage
 */

/**
 * Pushing cars into the stack requires using the pushStack method for each car
 * Popping cars off the stack requires using a loop until we get to the desired car
 * Keep a counter of each iteration of the loop to keep track of how many cars were removed, and store the removed cars in a list
 * After the chosen car was removed, add each item from the list containing the removed cars back to the original list 
 */
void pushStack(StackEntryLicensePlateNum item, STACK *stack) {
    if (stackFull(stack)) {
        return;
    } else {
        stack->entry[stack->top++]=item;
    }
}
void popStack(StackEntryLicensePlateNum item, STACK *stack) {
    if (stackEmpty(stack)) {
        return;
    } else {
        stack->entry[item] = 0;
        item = stack->entry[--stack->top];
    }
}
bool stackEmpty(STACK *stack) {
    return stack->top <= 0;
}
bool stackFull(STACK *stack) {
    return stack->top >= MAXSTACKSIZE;
}
void createStack(STACK *stack) {
    for (int i = 0; i < MAXSTACKSIZE; i++) {
        stack->entry[i] = 0;
    }
    stack->top = 0;
}
/**
 * Deallocates all memory locations in the stack, freeing up any memory taken up by the stack nodes, Also deallocates the memory for the stack itself.
 * @param stack a preexisting stack.
 * @return null if the operation to deallocate the entire stack from memory is successful.
 */
//STACK* destroyStack(STACK* stack) {
//    STACK_NODE* temp;
//    if (stack) {
//        while (stack->topOfStack != NULL) {
//            free(stack->topOfStack->pointerToNode->nodeCharData);
//            free(stack->topOfStack->pointerToNode);
//            temp = stack->topOfStack;
//            stack->topOfStack = stack->topOfStack->pointerToNode;
//            free(temp);
//        }
//        free(stack);
//    }
//    return NULL;
//}
