#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    if ((x>10)&&(x<20)&&(x%2==0)) {
        printf("The given number is greater than 10 but less than 20, and it is even.\n");
    } else {
        printf("The given number is not greater than 10, less than 20, or it is not even.\n");
    }
    
    return 0;
}