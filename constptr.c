#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int*const ptr=&a;
    // ptr=&b;
    *ptr =30;
    int*const ptr1=&b;
    printf("the value of the ptr is %d\n",*ptr+*ptr1);
    return 0;
}