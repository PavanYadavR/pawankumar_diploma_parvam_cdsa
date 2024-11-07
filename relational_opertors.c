#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int c=30;
    if(a==b)
    {
        printf("they are equal\n");
    }
    else{
        printf("they are not equal\n");
    }
    if(a>b)
    {
        printf("a is greater than b positive\n");

    }
    else{
        printf("a is smaller than b negative\n");
    }
        if(a<b)
    {
        printf("b is greater than a positive\n");

    }
    else{
        printf("a is smaller than b negative\n");
    }
    if(a>=b)
    {
        printf("a is equal/greater than b positive\n");
    }
    else{
        printf("b is neither equal nor greater than b negative\n");
    }
    if(b<=c)
    {
        printf("c is equal/greatr than b positive\n");
    }
    else{
        printf("c is neither equal nor smaller than b negative\n");
    }
    if(a!=c)
    {
        printf("a is not equal to b positive");
    }
}