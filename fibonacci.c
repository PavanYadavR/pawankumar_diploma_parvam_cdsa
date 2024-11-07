#include<stdio.h>
void main(){
    int n,f=0,b=1,c;
    printf("enter a number:");
    scanf("%d",&n);
     
     for(int i=0;i<n;i++)
     {
        printf("%d\t",f);
        c=f+b;
        f=b;
        b=c;
     }

}