CC = clang
CFLAGS = -Wall -Werror -g

all: twoSum mergeSort partition shellSort

twoSum: twoSum.c
	$(CC) $(CFLAGS) -o twoSum twoSum.c

mergeSort: mergeSort.c
	$(CC) $(CFLAGS) -o mergeSort mergeSort.c

partition: partition.c
	$(CC) $(CFLAGS) -o partition partition.c

shellSort: shellSort.c
	$(CC) $(CFLAGS) -o shellSort shellSort.c


##############################################################################

clean:
	rm -rf twoSum mergeSort partition shellSort *.dSYM
