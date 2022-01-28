/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   queue.c
 * Author: JakeG
 *
 * Created on January 26, 2022, 10:58 p.m.
 */
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

/**
 * 
 * @param queue the input queue (LIFO) data structure that is to be implemented using a circular array. 
 * queue->rear refers to the rear of the queue where elements will be added to.
 * queue->front refers to the front of the queue (opposite of the front) where elements will be removed from the queue.
 * queue->count refers to the number of elements in the queue.
 */
QUEUE* createQueue(void) {
    QUEUE* queue;
    queue->front = 0;
    queue->count = 0;
    queue->rear = -1;
    return queue;
}
/**
 * 
 * @param queueEntry the user-created typedef variable of type int
 * @param queue the input queue (LIFO) data structure that is used to be implemented using a circular array.
 * When adding an element to the rear of the stack, you must always use the modulus operator to "loop around" to the front of the array.
 * This is because if you try to add an element to slot 9, and the array is of size 9, 9 modulus 9 will yield 0, thus looping around to the front of array
 * A boundary check is used to see if the queue is full before appending an element to it.
 */
void appendToQueue(QueueEntry queueEntry, QUEUE* queue) {
    if (queueFull(queue)) {
        return;
    } else {
        queue->count++;
        queue->rear = (queue->rear+1) % MAXQUEUESIZE;
        queue->entry[queue->rear] = queueEntry;
    }
}
/**
 * 
 * @param queueEntry the user-created typedef variable of type int
 * @param queue the input queue (LIFO) data structure that is used to be implemented using a circular array. 
 * When removing an element from the front of the stack, you must always use the modulus operator to "loop around" to the rear of the array.
 * This is because if you try to add an element to slot 9, and the array is of size 9, 9 modulus 9 will yield 0, thus looping around to the rear of array
 * A boundary check is used to see if the queue has any elements inside it before attempting to remove any. 
 */
void removeFromQueue(QueueEntry queueEntry, QUEUE* queue) {
    if (queueEmpty(queue)) {
        return;
    }
    queue->count--;
    queueEntry = queue->entry[queue->front];
    queue->front = (queue->front+1) % MAXQUEUESIZE;
}
/**
 * 
 * @param queue the input queue (LIFO) data structure that is to be implemented using a circular array. 
 * @return if the number of elements in the queue is equal to 0.
 */
bool queueEmpty(QUEUE* queue) {
    return queue->count == 0;
} 
/**
 * 
 * @param queue the input queue (LIFO) data structure that is to be implemented using a circular array. 
 * @return if the number of elements in the queue is equal or greater than 15.
 */
bool queueFull(QUEUE* queue) {
    return queue->count >=MAXQUEUESIZE;
}
/**
 * 
 * @param queue the input queue (LIFO) data structure that is to be implemented using a circular array. 
 * @return the actual number of elements inside of the queue.
 */
int queueSize(QUEUE* queue) {
    return queue->count;
}   
