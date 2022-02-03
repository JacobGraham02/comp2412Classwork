/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   stackimplementation.h
 * Author: JakeG
 *
 * Created on January 20, 2022, 8:17 a.m.
 */
#include <stdbool.h>
#ifndef STACKIMPLEMENTATION_H
#define STACKIMPLEMENTATION_H

typedef struct node {
    void* dataPointer;
    struct node* linkToNode;
    int integerData;
} STACK_NODE;
typedef struct {
    int count;
    STACK_NODE* top;
} STACK;

STACK* createStack(void);
bool pushStack(STACK* stack, int integerData);
int* popStack(STACK* stack);
int* stackTop(STACK* stack);
STACK* destroyStack(STACK* stack);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* STACKIMPLEMENTATION_H */

