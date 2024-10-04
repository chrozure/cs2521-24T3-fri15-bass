CC = clang
CFLAGS = -Wall -Wvla -Werror -g

all: testStack

########################################################################

testStack: Queue.c Stack.c main.c
	$(CC) $(CFLAGS) -o testStack Queue.c Stack.c main.c

########################################################################

clean:
	rm -rf *.o testStack *.dSYM
