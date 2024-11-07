#include<stdio.h>
int main(){
    int i=1,t=1,n;
    printf("the tables of given number:");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        t=n*i;
        printf("the tables of %d is %d\n",n,t);

    }
}