#include <stdio.h>

int hash(char *key, int N);

int main(int argc, char *argv[]) {

    int size = 100;
    printf("hash(\"Bob\") = %d\n", hash("Bob", size));
    printf("hash(\"z12345\") = %d\n", hash("z12345", size));

	// You can use command-line arguments to try more hashing!
	for (int i = 1; i < argc; i++) {
		printf("hash(\"%s\") = %d\n",
					argv[i], hash(argv[i], size));
	}

    return 0;
}

// Hash function which converts a string to an integer
int hash(char *key, int N) {
	int h = 0;
	char *c;
	int i = 0;
	for (c = key; *c != '\0'; c++, i++) {
		h = h + *c * i;
	}
	return h % N;
}

/*
What are the defiencies of this function?
*/
