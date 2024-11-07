#include<stdio.h>
int main(){
    int num,rev=0;
    printf("enter the number to find its reverse:");
    scanf("%d",&num);
    int org=num;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if(org==rev){
    printf("its a palindrome ");
    }
    else{
    printf("its not a palinfdrome");
    }
    return 0;
}