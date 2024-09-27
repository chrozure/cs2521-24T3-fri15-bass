#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

bool hasTwoSum(int a[], int n, int v);

int main(void) {
    int a[SIZE] = {21, 19, 47, -18, -42, -4, 40, 35, 31, -30};

    int target = 1;
    if (hasTwoSum(a, SIZE, target)) {
        printf("Array has a two sum that equals %d\n", target);
    } else {
        printf("Array does not have a two sum that equals %d\n", target);
    }
}

bool hasTwoSum (int a[], int n, int v) {

    // BRUTE FORCE SOLUTION
    // Time complexity: O(n^2)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == v) {
                return true;
            }
        }
    }

    // Can we do better?

    return false;
}
