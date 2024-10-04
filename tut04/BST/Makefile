CC = clang
CFLAGS = -Wall -Wvla -Werror -g

all: bstExercises

########################################################################

bstExercises: bstExercises.o bst.o
	$(CC) $(CFLAGS) -o bstExercises bstExercises.o bst.o

bstExercises.o: bstExercises.c bst.h

bst.o: bst.c bst.h

########################################################################

clean:
	rm -rf *.o *.dSYM bstExercises
