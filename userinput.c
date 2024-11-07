#include<stdio.h>
int main(){
    int a;
    float b;
    char c[4];
    
    printf("enter an integer:");
    scanf("%d",&a);
    printf("enter a floating value:");
    scanf("%f",&b);
    printf("enter a character:");
    scanf("%s",&c);
     printf("The integer is:%d\n",a);
     printf("The float is:%.3f\n",b);
     printf("The char is:%s\n",c);
          return 0;
}