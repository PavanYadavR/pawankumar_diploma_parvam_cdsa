#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    int **ptr=&*ptr;
    printf("%d",**ptr);
    return 0;

}