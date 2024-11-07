#include<stdio.h>
int main(){
    int n,a,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("sum of digit:%d\n",sum);
    return 0;
}