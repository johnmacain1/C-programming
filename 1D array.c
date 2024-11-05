#include <stdio.h>

int main() {
    // Declare and initialize a 1D array of integers
    int i;
	int arr[5] = {3, 7, 6, 8, 10};

    // Access and print the elements of the array
    for(i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
