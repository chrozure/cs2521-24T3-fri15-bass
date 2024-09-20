#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isPalindrome(char *s);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("usage: %s <string>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    bool result = isPalindrome(argv[1]);
    printf("%s\n", result ? "yes" : "no");
}

bool isPalindrome(char *s) {
    // TODO
    return false;
}


/*
isPalindrome(S):
	Input:  array S[0..n - 1] of characters
	Output: true if S is a palindrome, false otherwise


Time complexity:
    T(n) =
*/
