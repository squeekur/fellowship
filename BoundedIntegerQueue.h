//——————————————————————————————————————
// BoundedIntegerQueue.h
// Header file for Bounded Integer Queue
//
// April Dawn Kester
// akester@ischool.berkeley.edu
// —————————————————————————————————————

#ifndef _BOUNDEDINTEGERQUEUE_H_INCLUDE_
#define _BOUNDEDINTEGERQUEUE_H_INCLUDE_

// BoundedIntegerQueue
// Exported reference type
typedef struct QueueObj* BoundedIntegerQueue;

// newQueue()
// constructor for the BoundedIntegerQueue type
BoundedIntegerQueue newQueue(int capacity);

// freeQueue()
// destructor for the BoundedIntegerQueue type
void freeQueue(BoundedIntegerQueue* pQ);

// isEmpty
// returns 1 if Q is empty, 0 otherwise
int isEmpty(BoundedIntegerQueue Q);

// isFull
// returns 1 if Q is full, 0 otherwise
int isFull(BoundedIntegerQueue Q);

// enqueue()
// adds x to end of Q
// Q CAN NOT BE FULL
int enqueue(BoundedIntegerQueue Q, int x);

// dequeue()
// removes and returns item at front of Q
// Q CAN NOT BE EMPTY
int dequeue(BoundedIntegerQueue Q);

// dequeueAll()
// reset Q to empty
// Q CAN NOT BE EMPTY
void dequeueAll(BoundedIntegerQueue Q);

// printQueue()
// prints Q to screen
void printQueue(BoundedIntegerQueue Q);

#endif
