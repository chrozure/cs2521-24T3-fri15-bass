#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void testListLength(int values[], int size);
int listLength(struct node *list);

int main(int argc, char *argv[]) {
    testListLength((int[]){}, 0);
    testListLength((int[]){3}, 1);
    testListLength((int[]){3, 1}, 2);
    testListLength((int[]){3, 1, 4}, 3);
    testListLength((int[]){3, 1, 4, 1}, 4);
    testListLength((int[]){3, 1, 4, 1, 5}, 5);
}

void testListLength(int values[], int size) {
    struct node *list = arrayToList(values, size);

    printf("List: ");
    listPrint(list);
    printf("\n");

    int length = listLength(list);
    printf("Length: %d\n\n", length);

    listFree(list);
}

int listLength(struct node *list) {
    // TODO
    return 0;
}
