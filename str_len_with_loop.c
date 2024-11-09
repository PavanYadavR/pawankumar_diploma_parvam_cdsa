#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="hello";
    int length=0;
    while (str[length]!='\0')
    {
       length++; /* code */
    }
    printf("the length of the string with inbulit is:%d\n",length);
    printf("the length of string with inbulit fun is:%d",strlen(str));
    return 0;
}
