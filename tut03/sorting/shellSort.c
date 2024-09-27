#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void shellSort(int a[], int lo, int hi);

int main(void) {

    // Feel free to play around with this shell sort implementation!
    int a[SIZE] = {21, 19, 47, -18, -42, -4, 40, 35, 31, -30};

    shellSort(a, 0, SIZE - 1);

    // The sorted array should be
    // {-42, -30, -18, -4, 19, 21, 31, 35, 40, 47}
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}


void shellSort(int a[], int lo, int hi)
{
	int h;
	for (h = 1; h <= (hi - lo) / 9; h = 3 * h + 1);

	for (; h > 0; h /= 3) {
		for (int i = lo + h; i <= hi; i++) {
			int val = a[i];
			int j = i;
			while (j >= lo + h && val < a[j - h]) {
				a[j] = a[j - h];
				j -= h;
			}
			a[j] = val;
		}
	}
}
