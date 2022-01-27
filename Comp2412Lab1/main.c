/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: JakeG
 *
 * Created on January 20, 2022, 8:31 a.m.
 */

#include <stdio.h>
#include <stdlib.h>
#include "stackimplementation.h"
#include <stddef.h>

/*
 * 
 */
int main() {
    
    char userInputChar;
    int userInputInteger;
    STACK* stackLab1;
    int popstackInt;
    int topOfStack;
    bool pushStackResult;
    
    do {
        printf("Input one of the following letters:\t"
                "A:Create a stack\t"
                "B:Pop an integer out of the stack\t"
                "C:Push an integer onto the stack\t"
                "D:Destroy the stack that contains integers\t"
                "E:Access the top element of the stack\t"
                "Z:Exit the program\n\n");
        
        userInputChar = getc(stdin);
        
        if (userInputChar == 'A') {
            printf("An integer stack was created\n");
            stackLab1 = createStack();
        } 
        
        if (userInputChar == 'B') {
            printf("You popped the top element off the integer stack\n\n");
            popstackInt = popStack(stackLab1);
        }
        
        if (userInputChar == 'C') {
            printf("Enter an integer to push onto the stack: \n\n");
            scanf("%d", &userInputInteger);
            printf("You pushed an integer onto the integer stack\n\n");
            pushStackResult = pushStack(stackLab1, userInputInteger);
            if (pushStackResult) {
                printf("You successfully pushed %d onto the stack\n\n", userInputInteger);
            } else {
                printf("The program encountered an error pushing %d onto the stack\n\n", userInputInteger);
            }
        }
        
        if (userInputChar == 'D') {
            printf("You destroyed the integer stack\n\n");
            stackLab1 = destroyStack(stackLab1);
        }
        
        if (userInputChar == 'E') {
            printf("You accessed the top element of the stack\n\n");
            topOfStack = popStack(stackLab1);
            printf("The top element of the integer stack is: %d\n\n", topOfStack);
        }
        
    } while (userInputChar != 'Z');
    return 0;
}

