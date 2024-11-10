#include <stdio.h>
int main() {
    char str[50] = "Hello World";
    int start = 0;
    int end = 0;
    int len = 0;
    while (str[end] != '\0') {
        end++;
        len++;
    }
    end--;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
