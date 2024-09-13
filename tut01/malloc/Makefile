CC = clang
CFLAGS = -Wall -Werror -g

all: ints array node

ints: ints.c
	$(CC) $(CFLAGS) -o ints ints.c

array: array.c
	$(CC) $(CFLAGS) -o array array.c

node: node.c
	$(CC) $(CFLAGS) -o node node.c

##############################################################################

clean:
	rm -rf ints array node *.dSYM
