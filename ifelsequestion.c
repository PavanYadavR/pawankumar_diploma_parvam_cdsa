#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if((x>10)||(x<20)||(x%2==0))
    {
        printf("the given is greater than 10 but lesser than 20 also its even");
    }
    else{
        printf("the given number is not greater than 10 but lesser not than 20 also its not even");
    }

}