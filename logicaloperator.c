#include<stdio.h>
int main(){
    int a=6;
    int b=6;
    if((a>5)&&(b>5))
    {
        printf("yes a and b is greater than 5\n");
    }
    else{
        printf("no a and b is not greater than 5\n ");
    }
    if((a>5)||(a>5))
    {
        printf("either a or b is greater than 5\n");
    }
    else{
        printf("no a and b not greater than 5\n");
    }
    int valid=1;
    int invalid= !valid;
    printf("%d\n",valid);
    printf("%d\n",invalid);
    return 0;
}