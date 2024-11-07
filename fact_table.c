#include<stdio.h>
int main(){
    int i=1,fact=1, n;
   printf("enter a  number fact:");
   scanf("%d",&n);
    for(i=0;i<=10;i++){
       fact =n*i;

    printf("table of %d is %d\n",n,fact);
    }
    return 0;
}
