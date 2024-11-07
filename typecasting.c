#include<stdio.h>
int main(){
    //implicit
    int a=10;
    float b=a;
    printf("%f\n",b);///10.0

    //Explicit
    float c=10.5;
    int d=(int)c;
    printf("%d",d);///10
}