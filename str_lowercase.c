
#include <stdio.h>
#include <string.h>

int main() {
    char a[50] = "hello";
    char b[50];
    char c[50] = "world";
    strcpy(b, a);
    printf("Copied string: %s\n", b);
    printf("Length of string b: %d\n", strlen(b));
    strcat(a, b);
    printf("Concatenated string a: %s\n", a);
    strcat(b, c);
    printf("Concatenated string b: %s\n", b);
    int res = strcmp(a, b);
    printf("Comparison result: %d\n", res);
    if (res == 0) {
        printf("Both strings are equal\n");
    } else if (res == -1) {
        printf("String a is lesser than string b\n");
    } else {
        printf("String a is greater than string b\n");
    }
    printf("Reversed string a: %s\n", strrev(a));
    for (int i = 0; a[i] != '\0'; i++) {
        a[i] = tolower(a[i]);
    }
    printf("lower case string a: %s\n", a);
    return 0;
}
