//
// Created by JakeG on 2022-01-28.
//
#include <stdio.h>
#include <stdlib.h>
#include "Problem1.h"

/*
 *
 */
int main(int argc, char** argv) {
    int testArray;
    testArray = returnArrayIntegersFromFile("Problem1IntegerList.txt");
    reverseArrayOfIntegers(testArray);

    return (EXIT_SUCCESS);
}
