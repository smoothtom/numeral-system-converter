# Usage 
# make 				= compile all binary
# make clean 	= remove all binary objects

# the compiler: gcc for C program, define as g++ for C++
CC = gcc 

# will not output the commands
.SILENT: all & clean

# define standard colors 
BLACK        := $(shell tput -Txterm setaf 0)
RED          := $(shell tput -Txterm setaf 1)
GREEN        := $(shell tput -Txterm setaf 2)
YELLOW       := $(shell tput -Txterm setaf 3)
LIGHTPURPLE  := $(shell tput -Txterm setaf 4)
PURPLE       := $(shell tput -Txterm setaf 5)
BLUE         := $(shell tput -Txterm setaf 6)
WHITE        := $(shell tput -Txterm setaf 7)
RESET := $(shell tput -Txterm sgr0)


all: main.c
	@echo "${GREEN}Compiling${WHITE} and${BLUE} running${WHITE} the programm ...${RESET}"
	sleep 0.5
	gcc main.c -lm -o run 
	./run


# for deleting the binary file, do: make clean
clean:
	@echo "${RED}Cleaning up ...${RESET}"
	sleep 0.5
	rm -r run
