#include<stdio.h>
int main(){

    int x;
    printf("enter the number to check if its positive or negative:");
    scanf("%d\n",&x);
    if (x>0)
    {
        printf("the number is greater than 0");

    }
    else if(x<0){
        printf("the number is  less than 0 ");
    }
    else{
        printf("the number is equal to 0");
    }

}