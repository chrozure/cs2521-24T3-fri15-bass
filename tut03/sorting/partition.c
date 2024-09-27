#include <stdio.h>
#include <stdbool.h>

int partition(int A[], int lo, int hi);

int main(void) {

    int A[10] = { 5, 3, 9, 6, 4, 2, 9, 8, 1, 7 };
    // int B[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    // int C[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

    printf("partition(A, 0, 9) = %d\n", partition(A, 0, 9));

}

void swap(int A[], int l, int r) {
    int tmp = A[r];
    A[r] = A[l];
    A[l] = tmp;
}

int partition(int A[], int lo, int hi) {
    // Picks the left-most element as the pivot
	int pivot = A[lo];

	int l = lo + 1;
	int r = hi;
	while (true) {
		while (l < r && A[l] <= pivot) l++;
		while (l < r && A[r] >= pivot) r--;
		if (l == r) break;
		swap(A, l, r);
	}

	if (pivot < A[l]) l--;
	swap(A, lo, l);
	return l;
}
