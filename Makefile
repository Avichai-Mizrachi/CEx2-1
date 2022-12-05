CC = gcc
FLAGS = -Wall -g

all: connections libmymat.a

connections: main.o libmymat.a
	$(CC) $(FLAGS) main.o libmymat.a -o connections

libmymat.a:my_mat.o
	ar -rcs libmymat.a my_mat.o

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all
clean:
	rm -f *.o *.a connections
