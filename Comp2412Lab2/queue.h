/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   queue.h
 * Author: JakeG
 *
 * Created on January 26, 2022, 10:55 p.m.
 */
#include <stddef.h>
#include <stdbool.h>

#ifndef QUEUE_H
#define QUEUE_H

#define MAXQUEUESIZE 15

typedef int QueueEntry;

typedef struct queue {
    int count;
    int front;
    int rear;
    QueueEntry entry[MAXQUEUESIZE];
} QUEUE; 

QUEUE* createQueue(void);
void appendToQueue(QueueEntry, QUEUE* queue);
void removeFromQueue(QueueEntry, QUEUE* queue);
bool queueEmpty(QUEUE* queue);
bool queueFull(QUEUE* queue);
int queueSize(QUEUE* queue);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* QUEUE_H */

