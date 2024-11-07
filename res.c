#include<stdio.h>
void main(){
    int i,j=0;
    printf("enter a number:");
    scanf("%d", &i);
    while(i!=0){
        i=i*10+j%10;
        j=j/10;

    }
    if(i<=j)
    {
        printf("enter a number%d",j);
    }
    else{
    printf("The reverse of a number is: %d", i);

    }


    // Step1: 
    // 123>0 = T
    // rev=0*10+123%10=3  //rev=3
    // num=123/10=12 //num=12
    // Step2: 
    // 12>0 = T
    // rev=3*10+12%10=32 //rev =32
    // num=12/10=1 //num=1
    // Step3: 
    // 1>0 = T
    // rev=32*10+1%10=321 //rev = 321
    // num=1/10=0 //num = 0
    // Step4:0>0 F
}
