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

#define MAXSTACKSIZE 10

typedef int StackEntryLicensePlateNum;
typedef struct {
    int top;
    StackEntryLicensePlateNum entry[MAXSTACKSIZE]; // Able to hold 10 entries in the stack
} STACK;

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

