# the compiler: gcc for C program, define as g++ for C++
CC = gcc 

all: main.c
	gcc main.c -lm -o run 
	./run

clean:
	rm -r run
