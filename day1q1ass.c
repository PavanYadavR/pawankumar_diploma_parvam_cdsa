
#include<stdio.h>
int main(){
float c=13.5;
    int d=(int)c;//during the explicit conversion of float to int we assign a new variable indirectly to the float it may show error
    printf("%d\n",d);//while converting to int the integer data types refers only the whole number part of the variable irrespective of decimal part
    printf("%f\n",c);
}
