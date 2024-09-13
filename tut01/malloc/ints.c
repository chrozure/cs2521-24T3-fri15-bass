#include <stdlib.h>
#include <stdio.h>

void stackInt(void);
void heapInt(void);

int main(void) {
	stackInt();
}

void stackInt(void) {
	int a = 5;
	printf("%d", a);
}

// int main(void) {
// 	heapInt();
// }

// void heapInt(void) {
// 	int *a = malloc(sizeof(int));
// 	*a = 5;
// }
