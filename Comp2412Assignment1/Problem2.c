/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

#include "Problem2.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

/**
 * Create a stack which dynamically allocates memory based on how many elements are to be added to the stack and initializes stack values to 
 * their defaults.
 * @return memory space for a stack that has been allocated in memory.
 */
//STACK* createStack(void) {
//    STACK* stack;
//    stack = (STACK*)malloc(sizeof(STACK));
//    if (stack) {
//        stack->numberOfItems=0;
//        stack->topOfStack=NULL;
//    }
//    return stack;
//}

/**
 * A function which dynamically allocates new memory locations for stack items. This has been modified to hold char inputs to fulfill the requirements
 * for this lab. A new pointer, or stack node, is created and initialized with the char data type value, and placed on the top of the stack, while
 * each other element is pushed downwards. The function returns true if this operation is successful.
 * @param stack a memory-allocated stack.
 * @param charData a character data type ('A','B', etc.) to be put inside of the newly allocated stack node.
 * @return true if a newly created stack node is pushed to an existing stack, false otherwise.
 */
//bool pushStack(STACK* stack, char charData) {
//    STACK_NODE* newPointer;
//    newPointer = (STACK_NODE*)malloc(sizeof(STACK_NODE));
//    if (!newPointer) {
//        return false;
//    }
//    newPointer->nodeCharData = charData;
//    newPointer->pointerToNode = stack->topOfStack;
//    stack->topOfStack = newPointer;
//    (stack->numberOfItems)++;
//    return true;
//}

/**
 * Allows access to the top stack node while also removing the node from the stack. If the stack is empty, a null node is returned.
 * Else, a pointer to a variable value is created and initialized with all the data from the top node on the stack. Once initialized, the top node
 * on the stack is given the value of the node 1 below the previous top node, and the free keyword is used to deallocate the memory used for the 
 * previous top node.
 * @param stack a preexisting stack.
 * @return null or the pointer containing the top node on the stack.
 */
//STACK_NODE* popStack(STACK* stack) {
//    STACK_NODE* dataOutputPointer;
//    STACK_NODE* temp;
//    if (stack->numberOfItems = 0) {
//        dataOutputPointer = NULL;
//    } else {
//        temp = stack->topOfStack;
//        dataOutputPointer = stack->topOfStack->nodeCharData;
//        stack->topOfStack = stack->topOfStack->pointerToNode;
//        free(temp);
//        (stack->numberOfItems)--;
//    }
//    return dataOutputPointer;
//}

/**
 * Does not remove anything from the stack, but allows you to access the top element on the stack. If the stack has 0 nodes inside, null is returned.
 * Else, the top node on the stack is returned.
 * @param stack a preexisting stack.
 * @return null or the top node on the stack.
 */
//int* stackTop(STACK* stack) {
//    if (stack->numberOfItems == 0) {
//        return NULL;
//    } else {
//        return stack->topOfStack->pointerToNode;
//    }
//}
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

/**
 * Uses a mathematical method given at: https://www.permadi.com/tutorial/numDecToHex/ to convert an integer into a hexidecimal number.
 * @param stack a preexisting stack in memory.
 * @param decimalInteger an integer which awaits conversion to a hexidecimal value.
 * @return 
 */
//void convertIntToHexidecimal(STACK* stack, long int decimalInteger) {
//    long int decimalNumber, remainder, quotient;
//    char hexadecimalNumber[100];
//    int arrayCounter = 1;
//    int arrayCounter2;
//    
//    quotient = decimalInteger;
//    
//    while (quotient != 0) {
//        remainder = quotient % 16;
//        
//        // Converting an integer into a character
//        if (remainder < 10) {
//            remainder = remainder + 48;
//        } else {
//            remainder = remainder + 55;
//        }
//        hexadecimalNumber[arrayCounter++] = remainder;
//        quotient = quotient / 16;
//    }
//
//    printf("The hexadecimal value of integer %ld is: ", decimalInteger);
//    for (arrayCounter2 = arrayCounter - 1; arrayCounter2 > 0; arrayCounter2--) {
//        printf("%c", hexadecimalNumber[arrayCounter2]);
//    }
//}
