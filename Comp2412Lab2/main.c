/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: JakeG
 *
 * Created on January 26, 2022, 10:55 p.m.
 */
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    QUEUE* queue;
    QueueEntry queueEntry;
    QueueEntry removeQueueEntry;
    int sizeOfQueue;
    int removedQueueInteger;
    
    queue = createQueue();

    printf("Size of queue before adding numbers 1 through 15: %d\n", sizeOfQueue);
    for (int i = 0; i < MAXQUEUESIZE; i++) {
        queueEntry = i;
        appendToQueue(queueEntry, queue);
    }
    sizeOfQueue = queueSize(queue);
    printf("Size of queue after adding numbers 1 through 15: %d\n", sizeOfQueue);
    
    for (int i = 1; i <= MAXQUEUESIZE; i++) {
        removeQueueEntry = i;
        if (i % 2 != 0) {
            removeQueueEntry *= 2;
            continue;
        } else {
            removeFromQueue(removeQueueEntry, queue);
        }
    }

    sizeOfQueue = queueSize(queue);
    printf("Size of queue after removing all even numbers from queue: %d\n", sizeOfQueue);
    
    for (int i = 0; i < 8; i++) {
        removedQueueInteger = removeFromQueue(i, queue);
        printf("Integer that was removed in the queue: %d\n", removedQueueInteger);
    }
    sizeOfQueue = queueSize(queue);
    printf("The size of queue after removing all integers from the queue: %d\n", sizeOfQueue);
}

