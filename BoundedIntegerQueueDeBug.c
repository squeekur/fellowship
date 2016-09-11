//——————————————————————————————————————
// BoundedIntegerQueueDeBug.c
// DeBug for Bounded Integer Queue
//
// April Dawn Kester
// akester@ischool.berkeley.edu
// —————————————————————————————————————

#include<stdio.h>
#include<stdlib.h>
#include"BoundedIntegerQueue.h"

int CAPACITY = 10;

int main(int argc, char* argv[]){
    //TESTED NODES IN BOUNDEDINTEGERQUEUE.C FILE
    
    //TEST ONE - testing queue constructor and boolean functions
    BoundedIntegerQueue A = newQueue(CAPACITY);
//    int e = isEmpty(A);
//    int s = isFull(A);
//    printf("%d, %d\n", e, s);
    
    //TEST TWO - testing enqueue w/one and two entries
//    int k = 24;
//    int j = 54;
//    enqueue(A, k);
//    enqueue(A, j);
//    int e = isEmpty(A);
//    int s = isFull(A);
//    printf("%d, %d\n", e, s);
//    printQueue(A);
    
    //TEST THREE - testing enqueue isFull()
    int item[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0; i<10; i++){
      enqueue(A, item[i]);
    }
//    printQueue(A);
//    int e = isEmpty(A);
//    int s = isFull(A);
//    printf("%d, %d\n", e, s);
//    
//    int k = 11;
//    enqueue(A, k);
//    printQueue(A);
    
    //TEST FOUR - testing dequeue and isEmpty()
//    int e = dequeue(A);
//    printf("%d\n", e);
//    int f = dequeue(A);
//    printf("%d\n", f);
//    printQueue(A);
//    int j;
//    for(j=0; j<10; j++){
//        dequeue(A);
//    }
//    dequeue(A);
//    printQueue(A);
    
    
    //TEST FIVE - testing freeQueue()
//    freeQueue(&A);
//    int k = 24;
//    enqueue(A, k);
//    dequeue(A);
//    printQueue(A);

    

 
   freeQueue(&A);

   return(EXIT_SUCCESS);
}
