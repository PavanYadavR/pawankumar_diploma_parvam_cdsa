
#include<stdio.h>
int main()
{
    int x;
    printf("enter the marks of the student below");
    scanf("%d",&x);
    if(60<x<69){
        printf("the result is PASS,GRADE='D'");
    }
    else if(70<x<79){
        printf("the result is First class class,GRADE='C");
        }
    else if(80<x<89)
    {
        printf("the result is distinction,GRADE='B");
        }
    else if(89<x<99){
        printf("the result is distinction,GRADE='A");

    }
    else{
        printf("the student has failed");
    }

}
