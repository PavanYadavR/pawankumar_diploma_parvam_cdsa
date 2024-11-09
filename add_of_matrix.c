
#include <stdio.h>
int main() {
int arr1[2][2] = {{0, 1}, {2, 3}};
int arr2[2][2] = {{4, 5}, {6, 7}};
int sum[2][2];
printf("Matrix 1:\n");
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
printf("%d ", arr1[i][j]);
}
printf("\n");
}
printf("Matrix 2:\n");
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
printf("%d ", arr2[i][j]);
}
printf("\n");
}
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
sum[i][j] = arr1[i][j] + arr2[i][j];
}
}
printf("Sum of Matrices:\n");
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
printf("%d ", sum[i][j]);
}
printf("\n");
    }

    return 0;
}
