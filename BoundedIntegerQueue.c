//——————————————————————————————————————
// BoundedIntegerQueue.c
// Implementation for Bounded Integer Queue
//
// April Dawn Kester
// akester@ischool.berkeley.edu
// —————————————————————————————————————

#include<stdio.h>
#include<stdlib.h>
#include<assert.h> //this is in the standard library
#include"BoundedIntegerQueue.h"

// NodeObj
typedef struct NodeObj{
    int item;
    struct NodeObj* next;
}NodeObj;

// Node
typedef NodeObj* Node;

// newNode()
// node constructor
Node newNode(int x) {
    Node N = malloc(sizeof(NodeObj));
    assert(N!=NULL);
    N->item = x;
    N->next = NULL;
    return(N);
}

// freeNode()
// node destructor
void freeNode(Node* pN){
    if(pN!=NULL && *pN!=NULL){
        free(*pN);
        *pN = NULL;
    }
}

// QueueObj
typedef struct QueueObj{
    Node front;
    Node back;
    int numItems;
    int queueCapacity;
}QueueObj;

// newQueue()
// constructor for the BoundedIntegerQueue type
BoundedIntegerQueue newQueue(capacity){
    BoundedIntegerQueue Q = malloc(sizeof(QueueObj));
    assert(Q!=NULL);
    Q->front = NULL;
    Q->back = NULL;
    Q->numItems = 0;
    Q->queueCapacity = capacity;
    return Q;
    
}

// freeQueue()
// destructor for the BoundedIntegerQueue type
void freeQueue(BoundedIntegerQueue* pQ){
    if(pQ!=NULL && *pQ!=NULL){
        if(!isEmpty(*pQ)) dequeueAll(*pQ);
        free(*pQ);
        *pQ = NULL;
    }
}

// isEmpty
// returns 1 if Q is empty, 0 otherwise
int isEmpty(BoundedIntegerQueue Q){
    if(Q==NULL){
        fprintf(stderr, "Queue Error: calling isEmpty() on NULL Queue Reference\n");
        exit(EXIT_FAILURE);
    }
    return(Q->numItems==0);
}

// isFull
// returns 1 if Q is full, 0 otherwise
int isFull(BoundedIntegerQueue Q){
    if(Q==NULL){
        fprintf(stderr, "Queue Error: calling isFull() on NULL Queue Reference\n");
        exit(EXIT_FAILURE);
    }
    return(Q->numItems==Q->queueCapacity);
}

// enqueue()
// adds x to end of Q
// Q CAN NOT BE FULL
int enqueue(BoundedIntegerQueue Q, int x){
    Node N;
    Node P;
    if(Q==NULL){
        fprintf(stderr, "Queue Error: calling enqueue() on NULL Queue Reference\n");
        exit(EXIT_FAILURE);
    }
    if(isFull(Q)==1){
        printf("Queue is full\n");
        return -1; //DOES NOT HALT PROGRAM, RETURNS -1 CLIENT HANDLE
    }
    else{
        N = newNode(x);
        if(Q->front==NULL){
            Q->front = N;
        }
        if(Q->back==NULL){
            N->next = Q->back;
            Q->back = N;
        }
        else{
            P = Q->back;
            Q->back = N;
            P->next = N;
            N->next = NULL;
        }
        Q->numItems++;
        return 1;
    }
}

// dequeue()
// removes and returns item at front of Q
// Q CAN NOT BE EMPTY
int dequeue(BoundedIntegerQueue Q){
    Node N;
    int returnItem;
    if(Q==NULL){
        fprintf(stderr, "Queue Error: calling dequeue() on NULL Queue Reference\n");
        exit(EXIT_FAILURE);
    }
    if(isEmpty(Q)==1){
        printf("Queue is empty\n");
        return -1; //DOES NOT HALT PROGRAM, RETURNS -1 CLIENT HANDLE
    }
    N = Q->front;
    returnItem = Q->front->item;
    if(Q->front == Q->back){
        Q->front = NULL;
        Q->back = NULL;
        freeNode(&N);
    }
    else{
        Q->front = Q->front->next;
        freeNode(&N);
    }
    Q->numItems--;
    return returnItem;
}

// dequeueAll()
// reset Q to empty
// Q CAN NOT BE EMPTY
void dequeueAll(BoundedIntegerQueue Q){
    if(Q==NULL){
        fprintf(stderr, "Queue Error: calling dequeueAll() on NULL Queue Reference\n");
        exit(EXIT_FAILURE);
    }
    if(isEmpty(Q)==1){
        fprintf(stderr, "Queue Error: calling dequeueAll() on empty Queue\n");
        exit(EXIT_FAILURE);
    }
    while(Q->numItems>0) dequeue(Q);
}

// printQueue()
// prints Q to screen
void printQueue(BoundedIntegerQueue Q){
    Node N;
    if(Q==NULL){
        fprintf(stderr, "Queue Error: calling printQueue() on NULL Queue Reference\n");
        exit(EXIT_FAILURE);
    }
    for(N=Q->front; N!=NULL; N=N->next){
        printf("%d ", N->item);
        printf("\n");
    }
    
}
