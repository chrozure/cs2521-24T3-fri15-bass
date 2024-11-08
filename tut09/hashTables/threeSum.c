#include <stdbool.h>
#include <stdio.h>

#define SIZE 10

#include "hashTable.h"

bool threeSum(int arr[], int size, int sum);

int main(void) {
    int a[SIZE] = {21, 19, 47, -18, -42, -4, 40, 35, 31, -30};

    int target = 1;
    if (threeSum(a, SIZE, target)) {
        printf("Array has a three sum that equals %d\n", target);
    } else {
        printf("Array does not have a three sum that equals %d\n", target);
    }

    return 0;
}

bool threeSum(int arr[], int size, int sum) {

    return false;
}
