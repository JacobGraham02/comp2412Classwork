/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   Problem3.h
 * Author: JakeG
 *
 * Created on January 31, 2022, 11:14 p.m.
 */

#ifndef PROBLEM3_H
#define PROBLEM3_H
#include "stddef.h"
#include "stdbool.h"

// Constant defined for the size of stack
#define MAXSTACKSIZE 10

// Explicitly declared type definitions
typedef int StackEntryLicensePlateNum;
// Explicitly declared type definition structure which holds the properties of a stack array 
typedef struct {
    int top;
    StackEntryLicensePlateNum entry[MAXSTACKSIZE]; // 10 stack entries of type integer which hold the license plates of cars
} STACK;

// Function signatures
void pushStack(StackEntryLicensePlateNum, STACK *);
void popStack(StackEntryLicensePlateNum, STACK *);
bool stackEmpty(STACK *);
bool stackFull(STACK *);
void createStack(STACK *);


#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* PROBLEM3_H */

