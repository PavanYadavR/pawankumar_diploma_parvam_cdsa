#include <stdio.h>
int main() {
    int arr[3][3] = {{2, 3, 7}, {4, 5, 4}, {4, 7, 8}};
    int concatenated[3][3];
    int arr2[3][3] = {{1, 6, 9}, {2, 11, 0}, {3, 12, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            concatenated[i][j] = arr[i][j];
            concatenated[i + 3][j] = arr2[i][j];
        }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix to concatenate:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("Concatenated Matrix:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", concatenated[i][j]);
        }
        printf("\n");
    }
    return 0;
}
