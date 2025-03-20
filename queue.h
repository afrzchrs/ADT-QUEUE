#include "linkedlist.h"

#ifndef QUEUE_H
#define QUEUE_H

typedef address Queue;

void CreateQueue(Queue *Q);

boolean is_Empty(Queue Q);

boolean is_Full(Queue Q);

void enqueue(Queue *q, infotype X);

void dequeue(Queue *q, infotype *X);

void printQueue(Queue q);

#endif
