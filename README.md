//—————————————————————————————————————— <br>
// BoundedIntegerQueue<br>
// README file for Bounded Integer Queue<br>
//<br>
// April Dawn Kester<br>
// akester@ischool.berkeley.edu<br>
// —————————————————————————————————————<br>

Greetings,
This Queue was created for the 2015 KPCB Engineering Fellows Program application.

Files you should have:<br>
README<br>
makefile<br>
BoundedIntegerQueue.c<br>
BoundedIntegerQueue.h<br>
BoundedIntegerQueueDeBug.c<br>
BoundedIntegerQueueTest.c<br>

Instructions to run:<br>
$make<br>
$./BoundedIntegerQueueTest<br>

Notes:<br>
All files were compiled on MacOSX and Fedora Linux with no warnings. They were also run through valgrind with no possible leaks.

enqueue() and dequeue() are resolved by passing -1 to the client, I did this as opposed to halting the program (which was the alternative option).

For algorithmic runtime optimization I chose to use a linked list with a tail reference. I also chose to write this program in C as opposed to Java (my native language) under the debatable assumption that C is more memory efficient.

