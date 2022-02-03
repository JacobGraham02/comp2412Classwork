/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
/*
 bool pushStack(STACK* stack, void* dataInputPointer);
void* popStack(STACK* stack);
void* stackTop(STACK* stack);
STACK* destroyStack(STACK* stack);
 */
#include "stackimplementation.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

STACK* createStack(void) {
    STACK* stack;
    stack = (STACK*)malloc(sizeof(STACK));
    if (stack) {
        stack->count=0;
        stack->top=NULL;
    }
    return stack;
}
bool pushStack(STACK* stack, int integerData) {
    STACK_NODE* newPointer;
    newPointer = (STACK_NODE*)malloc(sizeof(STACK_NODE));
    if (!newPointer) {
        return false;
    }
    newPointer->integerData = integerData;
    newPointer->linkToNode = stack->top;
    stack->top = newPointer;
    (stack->count)++;
    return true;
}
int* popStack(STACK* stack) {
    int* dataOutputPointer;
    STACK_NODE* temp;
    if (stack->count = 0) {
        dataOutputPointer = NULL;
    } else {
        temp = stack->top;
        dataOutputPointer = stack->top->integerData;
        stack->top = stack->top->linkToNode;
        free(temp);
        (stack->count)--;
    }
    return dataOutputPointer;
}
int* stackTop(STACK* stack) {
    if (stack->count == 0) {
        return NULL;
    } else {
        return stack->top->integerData;
    }
}
STACK* destroyStack(STACK* stack) {
    STACK_NODE* temp;
    if (stack) {
        while (stack->top != NULL) {
            free(stack->top->linkToNode->integerData);
            free(stack->top->linkToNode);
            temp = stack->top;
            stack->top = stack->top->linkToNode;
            free(temp);
        }
        free(stack);
    }
    return NULL;
}
