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
 * When an integer representing the type StackEntryLicensePlateNum is passed as an argument to the function, 
 * the StackEntryLicensePlateNum (int) is stored in the array which is the underlying data structure for this stack.
 * Each time a new item is added to the stack, the internal counter is incremented to ensure each array location is utilized and nothing is overwritten.
 * If the stack is full, the function returns without performing any action. 
 * @param item StackEntryLicensePlateNum type definition which represents an integer.
 * @param stack a pointer to a preexisting stack with array implementation.
 */
void pushStack(StackEntryLicensePlateNum item, STACK *stack) {
    if (stackFull(stack)) {
        return;
    } else {
        stack->entry[stack->top++]=item;
    }
}
/**
 * When an integer is passed as an argument into this function for StackEntryLicensePlateNum, the top stack element is removed.
 * In other words, the first array index is set to 0. If the stack is empty, the function returns without performing any action. 
 * The stack location is decremented after popping an element off the stack to ensure you can access each element in the underlying array.
 * @param item StackEntryLicensePlateNum type definition which represents an integer.
 * @param stack a pointer to a preexisting stack with array implementation.
 */
void popStack(StackEntryLicensePlateNum item, STACK *stack) {
    if (stackEmpty(stack)) {
        return;
    } else {
        stack->entry[item] = 0;
        item = stack->entry[--stack->top];
    }
}
/**
 * Returns if the underlying array has 0 elements within it. In other words, if the array has any values other than 0.
 * @param stack a pointer to a preexisting stack with array implementation
 * @return if the array has any non-zero elements
 */
bool stackEmpty(STACK *stack) {
    return stack->top <= 0;
}
/**
 * Returns if the underlying array has 10 elements. In other words, if the array has 10 elements which are not 0.
 * @param stack a pointer to a preexisting stack with array implementation
 * @return if the array has 10 or more non-zero elements. 
 */
bool stackFull(STACK *stack) {
    return stack->top >= MAXSTACKSIZE;
}
/**
 * Initializes a new stack; sets each value in the underlying array to be 0, and sets the top of the stack to be 0 (no elements in stack).
 * @param stack a pointer to a preexisting stack with array implementation
 */
void createStack(STACK *stack) {
    for (int i = 0; i < MAXSTACKSIZE; i++) {
        stack->entry[i] = 0;
    }
    stack->top = 0;
}
