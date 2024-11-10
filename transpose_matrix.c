#include <stdio.h>

int main() {
    int arr[3][3] = {{2, 3, 7}, {4, 5, 4}, {4, 7, 8}};
    int transpose[3][3];

    // Transpose matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    // Print transposed matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
