//——————————————————————————————————————
// BoundedIntegerQueueTest.c
// Test for Bounded Integer Queue
//
// April Dawn Kester
// akester@ischool.berkeley.edu
// —————————————————————————————————————


#include<stdio.h>
#include<stdlib.h>
#include"BoundedIntegerQueue.h"

int CAPACITY = 10;
int CAPACITY2 = 5;

int main(int argc, char* argv[]){
    BoundedIntegerQueue A = newQueue(CAPACITY);
    BoundedIntegerQueue B = newQueue(CAPACITY2);
    
    int e = isEmpty(A);
    int s = isFull(A);
    printf("%d, %d\n", e, s); //Should print 1, 0
    
    e = isEmpty(B);
    s = isFull(B);
    printf("%d, %d\n", e, s); //Should print 1, 0
    
    int item[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0; i<10; i++){
        enqueue(A, item[i]);
    }
    
    int item2[10] = {12,15,66,104,999};
    int j;
    for(j=0; j<5; j++){
        enqueue(B, item2[j]);
    }
    
    printQueue(A); //should print 1,2,3,4,5,6,7,8,9,10
    printQueue(B); //should print 12, 15, 66, 104, 999
    
    enqueue(A, 24); //should print queue full
    enqueue(A, 54); //should print queue full
    
    e = isEmpty(A);
    s = isFull(A);
    printf("%d, %d\n", e, s); //Should print 0, 1
    
    int m;
    for(m=0; m<5; m++){
    dequeue(B);
    }
    
    dequeue(B); //should print queue is empty
    enqueue(B, 24);
    
    dequeue(A);
    int p = dequeue(A);
    printf("%d\n", p); //should print 2
    dequeue(A);
    p = dequeue(A);
    printf("%d\n", p); //should print 4
    enqueue(A, 24);
    enqueue(A, 44);
    dequeue(A);
    dequeue(A);
    enqueue(A, 44);
    
    printQueue(A); //should print 7,8,9,10,24,44,44
    printQueue(B); //should print 24
    
    dequeueAll(B);
    e = isEmpty(B);
    printf("%d\n", e); //Should print 1
    printQueue(B); //should print nothing
    
    freeQueue(&A);
    freeQueue(&B);

   return(EXIT_SUCCESS);
}
