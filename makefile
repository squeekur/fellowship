# BoundedIntegerQueue
# Makefile
# 
# April Dawn Kester
# akester@ischool.berkeley.edu

FLAGS   = -std=c99 -Wall
SOURCES = BoundedIntegerQueue.c BoundedIntegerQueueTest.c
OBJECTS = BoundedIntegerQueue.o BoundedIntegerQueueTest.o
HEADERS = BoundedIntegerQueue.h
EXEBIN  = BoundedIntegerQueueTest
FILES = README makefile DictionaryTest.c $(SOURCES) $(HEADERS)

all: $(EXEBIN)

$(EXEBIN) : $(OBJECTS) $(HEADERS)
	gcc -o $(EXEBIN) $(OBJECTS)

$(OBJECTS) : $(SOURCES) $(HEADERS)
	gcc -c $(FLAGS) $(SOURCES)

clean :
	rm -f $(EXEBIN) $(OBJECTS)

check:
	valgrind --leak-check=full $(EXEBIN) 
