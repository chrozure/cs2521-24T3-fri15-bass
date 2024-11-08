CC = clang
CFLAGS = -Wall -Werror -g

all: simpleHash threeSum

simpleHash: simpleHash.c
	$(CC) $(CFLAGS) -o simpleHash simpleHash.c

threeSum: threeSum.c
	$(CC) $(CFLAGS) -o threeSum threeSum.c

##############################################################################

clean:
	rm -rf simpleHash threeSum *.dSYM
