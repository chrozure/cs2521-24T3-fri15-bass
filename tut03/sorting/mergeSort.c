#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void mergeSort(int A[], int lo, int hi);
void merge(int A[], int lo, int mid, int hi);

int main(void) {

    // Feel free to play around with this merge sort implementation!
    int a[SIZE] = { 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 };

    mergeSort(a, 0, SIZE - 1);

    // The sorted array should be
    // { 1, 2, 3, 4, 4, 5, 6, 7, 7, 9 }
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}



void mergeSort(int A[], int lo, int hi) {
	if (lo >= hi) return;

	int mid = (lo + hi) / 2;
	mergeSort(A, lo, mid);
	mergeSort(A, mid + 1, hi);
	merge(A, lo, mid, hi);
}

void merge(int A[], int lo, int mid, int hi) {
	int nitems = hi - lo + 1;
	int *tmp = malloc(nitems * sizeof(int));

	int i = lo;
	int j = mid + 1;
	int k = 0;

	// scan both segments into tmp
	while (i <= mid && j <= hi) {
		if (A[i] <= A[j]) {
			tmp[k++] = A[i++];
		} else {
			tmp[k++] = A[j++];
		}
	}

	// copy items from unfinished segment
	while (i <= mid) tmp[k++] = A[i++];
	while (j <= hi)  tmp[k++] = A[j++];

	// copy items from tmp back to main array
	for (i = lo, k = 0; i <= hi; i++, k++) {
		A[i] = tmp[k];
	}
	free(tmp);
}



/* merge(A, 0, 4, 9)

A = { 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 }
nitems =
tmp =

*/