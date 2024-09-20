#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod);

int main(void) {
    solveHanoi(3, "A", "C", "B");
}

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod) {

    // base case - when we have no more disks to move
    if (numDisks == 0) return;

    // recursive case - bottom disk, and the top (numDIsks - 1) disks
    solveHanoi(numDisks - 1, fromRod, otherRod, toRod);
    // move disk from fromRod to toRod
    printf("Move disk from rod %s to Rod %s\n", fromRod, toRod);
    solveHanoi(numDisks - 1, otherRod, toRod, fromRod);
}
