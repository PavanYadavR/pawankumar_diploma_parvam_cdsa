#include<stdio.h>

int main(){
    int n, i;
    printf("enter the prime no:");
    scanf("%d",&n);
    for(i=2;i*i<=n;i++)
    if(n%i==0)return printf("%d is not prime\n",n);
    printf("%d is prime\n",n);
    return 0;
}