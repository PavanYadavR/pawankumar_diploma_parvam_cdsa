#include<stdio.h>
int main(){
 int fac=1,n,i;
 printf("enter to fint the factorial of n numbers");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    fac=fac*i;
    
 }
 printf("the factorial of %d numbers is %d\n",n,fac);
 }