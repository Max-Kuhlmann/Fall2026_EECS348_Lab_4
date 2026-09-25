# This is a comment line
CC=gcc
# CFLAGS will be the options passed to the compiler.
CFLAGS=-c -Wall
OBJECTS=task1.o
all: prog

prog: $(OBJECTS)
	$(CC) $(OBJECTS) -o prog

%.o: %.cpp
	$(CC) $(CFLAGS) $<

clean:
	rm -rf *.o prog

