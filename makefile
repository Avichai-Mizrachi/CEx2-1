CC = gcc
FLAGS = -Wall -g
OBJ = main.o my_mat.o

all: connection

connection: main.o my_mat.o
	$(CC) $(FLAGS) main.o my_mat.o -o connection

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all
clean:
	rm -f *.o connection