CC = clang
CFLAGS = -Wall -Wvla -Werror -g

all: reachable

########################################################################

reachable: reachable.o Graph.o Set.o
	$(CC) -o reachable reachable.o Set.o Graph.o

reachable.o: reachable.c Graph.h Set.h
	$(CC) $(CFLAGS) -c reachable.c

Graph.o: Graph.c Graph.h
	$(CC) $(CFLAGS) -c Graph.c

Set.o: Set.c Set.h
	$(CC) $(CFLAGS) -c Set.c

########################################################################

clean:
	rm -rf *.o *.dSYM reachable
