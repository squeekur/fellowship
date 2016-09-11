//——————————————————————————————————————
// BoundedIntegerQueue
// README file for Bounded Integer Queue
//
// April Dawn Kester
// akester@ischool.berkeley.edu
// —————————————————————————————————————

Greetings,
This Queue was created for the 2015 KPCB Engineering Fellows Program application.

Files you should have:
README
makefile
BoundedIntegerQueue.c
BoundedIntegerQueue.h
BoundedIntegerQueueDeBug.c
BoundedIntegerQueueTest.c

Instructions to run:
$make
$./BoundedIntegerQueueTest

Notes:
All files were compiled on MacOSX and Fedora Linux with no warnings. They were also run through valgrind with no possible leaks.

enqueue() and dequeue() are resolved by passing -1 to the client, I did this as opposed to halting the program (which was the alternative option).

For algorithmic runtime optimization I chose to use a linked list with a tail reference. I also chose to write this program in C as opposed to Java (my native language) under the debatable assumption that C is more memory efficient.

Some code in this program was taken from an ADT I previously built for a class assignment: https://github.com/squeekur/c/tree/master/Dictionary

Thank you for your time and consideration!
