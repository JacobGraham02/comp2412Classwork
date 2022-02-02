//
// Created by JakeG on 2022-01-28.
//
#include <stdio.h>
#include <stdlib.h>
//#include "Problem1.h"
//#include "Problem2.h"
#include "Problem3.h"

/*
 *
 */
int main(int argc, char** argv) {
    // Problem 1 variables
//    int* integerArrayFromFile;
//    int* reversedIntegerArray;
//    int reversedArrayLoopCounter;
//    int sizeOfReversedArray = 9;
    
//    integerArrayFromFile = returnArrayIntegersFromFile("Problem1IntegerList.txt");
//    
//    printf("Non-reversed integer array: ");
//    for (arrayLoopCounter = 0; arrayLoopCounter < sizeOfReversedArray; arrayLoopCounter++) {
//        printf("%d, ", integerArrayFromFile[arrayLoopCounter]);
//    }
//    printf("\n\n");
//    
//    reversedIntegerArray = reverseArrayOfIntegers(integerArrayFromFile);
//
//    printf("Reversed integer array: ");
//    for (arrayLoopCounter = 0; arrayLoopCounter < sizeOfReversedArray; arrayLoopCounter++) {
//        printf("%d, ", reversedIntegerArray[arrayLoopCounter]);
//    }
    
    // Problem 2 variables
//    STACK* stackProblem2;
//    long int problem2DecimalNumber;
//    int arrayCounterHexadecimal = 1;
//    int arrayCounter2Hexadecimal;
//    
//    printf("Enter any decimal number: ");
//    scanf("%ld", &problem2DecimalNumber);
//    
//    convertIntToHexidecimal(stackProblem2, problem2DecimalNumber);
   
    // Problem 3 variables
    STACK* stackProblem3OriginalCars;
    STACK* stackProblem3CarsExceptTarget;
    char userInputChar;
    int carLicensePlateNum;
    int carLicensePlateNumRemoval;
    int carLicensePlateNumRemovalCounter;
    int carsExceptTargetCar;
    int numberOfCarsMovedFromGarage;
    int stackSpaceCounter = 0;
    
    createStack(stackProblem3OriginalCars);
    createStack(stackProblem3CarsExceptTarget);
    
    
    do {
        printf("Input one of the following letters:\t"
                "A: Push a car onto the stack\t"
                "D: Remove a car from the stack\n");
        
        userInputChar = getc(stdin);
        scanf(" %c",&userInputChar);
        
        if (userInputChar == 'A') {
            if (stackFull(stackProblem3OriginalCars)) {
                printf("The car garage is full, and you cannot add any cars to it\n");
                continue;
            }
            printf("What is the license plate number of the car you wish to add to the garage?  \n");
            scanf("%d", &carLicensePlateNum);
            
            stackSpaceCounter++;
            pushStack(carLicensePlateNum,stackProblem3OriginalCars);
            printf("You successfully added a car with the license plate %d to the garage\n\n", carLicensePlateNum);
        }
        
        if (userInputChar == 'D') {
            if (stackEmpty(stackProblem3OriginalCars)) {
                printf("You cannot depart any cars because there are none in the garage\n");
                continue;
            }
            if (stackFull(stackProblem3CarsExceptTarget)) {
                printf("The stack of departed cars is full, and you cannot add any more cars to it\n");
                continue;
            }
            printf("Listed is the list of cars that are currently in the garage: ");
            for (int i = 0; i < 10; i++) {
                printf("%d ", stackProblem3OriginalCars->entry[i]);
            } 
            
            printf("\nEnter the license plate number of car you wish to remove from the garage?:  ");
            scanf("%d", &carLicensePlateNumRemoval);
            
            carLicensePlateNumRemovalCounter;

            // Removing all other cars including the target car
            for (carLicensePlateNumRemovalCounter = 0; carLicensePlateNumRemovalCounter < 10; carLicensePlateNumRemovalCounter++) {
                if (stackProblem3OriginalCars->entry[carLicensePlateNumRemovalCounter] != carLicensePlateNumRemoval 
                        && stackProblem3OriginalCars->entry[carLicensePlateNumRemovalCounter] != 0) {
                    
                    pushStack(stackProblem3OriginalCars->entry[carLicensePlateNumRemovalCounter], stackProblem3CarsExceptTarget);
                    popStack(carLicensePlateNumRemovalCounter, stackProblem3OriginalCars);
                }
            }
            
            popStack(carLicensePlateNumRemovalCounter,stackProblem3OriginalCars);
            
            printf("All cars in the garage in the same order as before excluding the target car: ");
          
            for (carsExceptTargetCar = 0; carsExceptTargetCar < 10; carsExceptTargetCar++) {
                if (stackProblem3CarsExceptTarget->entry[carsExceptTargetCar] != 0) {
                    pushStack(stackProblem3CarsExceptTarget->entry[carsExceptTargetCar], stackProblem3OriginalCars);
                }
                printf("%d ", stackProblem3OriginalCars->entry[carsExceptTargetCar]);
            }
            printf("\nThe number of cars that were moved from the garage to access the car we want: %d\n\n", numberOfCarsMovedFromGarage);
        } 
        
    }while (userInputChar != 'Z');
   
    return (EXIT_SUCCESS);
}
