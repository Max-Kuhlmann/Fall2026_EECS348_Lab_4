# This is a comment line
CC=gcc
# CFLAGS will be the options passed to the compiler.
CFLAGS=-c -Wall
TASK_1_OBJECTS=task1.o
TASK_2_OBJECTS=task2.o
all: task1 task2

task1: $(TASK_1_OBJECTS)
	$(CC) $(TASK_2_OBJECTS) -o task1

task2: $(TASK_2_OBJECTS)
	$(CC) $(TASK_2_OBJECTS) -o task2

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -rf *.o task1 task2

