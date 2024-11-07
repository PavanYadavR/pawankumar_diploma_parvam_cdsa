#include<stdio.h>
int main()
{
    int i, sum=0;
    for(i=0;i<=10;i++)
    {
        sum+=i;
    }
    printf("sum of numbers from 1 to 10: %d\n",sum);
    return 0;
}