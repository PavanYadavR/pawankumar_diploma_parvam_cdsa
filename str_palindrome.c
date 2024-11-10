
#include <stdio.h>
int main() {
    char str[50], rev[50];
    int i, j, len = 0;
    printf("Enter a string to check if it's a palindrome: ");
    scanf("%s", str);
    while (str[len] != '\0') {
        len++;
    }
    j = 0;
    for (i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[len] = '\0';
    i = 0;
    while (i < len) {
        if (str[i] != rev[i]) {
            break;
        }
        i++;
    }
    if (i == len) {
        printf("It's a palindrome.");
    } else {
        printf("It's not a palindrome.");
    }

    return 0;
}
