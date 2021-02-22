# the compiler: gcc for C program, define as g++ for C++
CC = gcc 

all: main.c
	gcc main.c -lm -o run 
	./run


# for deleting the binary file, do: make clean
clean:
	rm -r run
