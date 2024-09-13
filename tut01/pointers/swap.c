// Compile this program with:
// clang -Wall -Werror -g -o swap swap.c

#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
	int a = 5;
	int b = 7;
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	// int x;
	// printf("%d\n", x);

	// if (x == 1) {
	// 	printf("Hello world!\n");
	// }
}

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
