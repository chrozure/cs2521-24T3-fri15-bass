CC = clang
CFLAGS = -Wall -Werror -g

all: listSum listDelete

listSum: listSum.c
	$(CC) $(CFLAGS) -o listSum listSum.c

listDelete: listDelete.c
	$(CC) $(CFLAGS) -o listDelete listDelete.c

##############################################################################

clean:
	rm -rf listSum listDelete *.dSYM
