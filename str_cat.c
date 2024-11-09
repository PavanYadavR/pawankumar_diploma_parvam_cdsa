#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hello";
    char b[50];
    char c[50]="world";
    strcpy(b,a);
    printf("%s\n",b);
    printf("%d\n",strlen(b));
    strcat(a,b);
    printf("the concatenated string is:%s\n",a);
    strcat(b,c);
    printf("the concatenated string is:%s\n",b);
    return 0;
}