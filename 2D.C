#include <stdio.h>

int main() {
    // Declare and initialize a 2D array of integers (3 rows, 3 columns)
    int i,j;
	int arr[3][3] = {
        {3, 2, 3},
        {1, 5, 8},
        {0, 5, 9}
    };

    // Access and print the elements of the 2D array
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element at arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
