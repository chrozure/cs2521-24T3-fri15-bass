#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod);

int main(void) {
    solveHanoi(3, "A", "C", "B");
}

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod) {
    // move disk from fromRod to toRod
    printf("Move disk from rod %s to Rod %s\n", fromRod, toRod);
}
