CC = clang
CFLAGS = -Wall -Werror -g

.PHONY: all
all: listLength listCountOdds listIsSorted listDelete towerOfHanoi

listLength: listLength.c list.c
listCountOdds: listCountOdds.c list.c
listIsSorted: listIsSorted.c list.c
listDelete: listDelete.c list.c
towerOfHanoi: towerOfHanoi.c

.PHONY: clean
clean:
	rm -rf listLength listCountOdds listIsSorted listDelete towerOfHanoi *.dSYM
