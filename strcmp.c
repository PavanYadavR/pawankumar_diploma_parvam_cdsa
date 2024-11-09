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
    int res=strcmp(a,b);
    printf("%d\n",res);
    if(res==0){
        printf("both string are equal");
    }
    else if (res==-1){
        printf("string1 is lesser then str2");
    }
    else{
        printf("string1 is greater then str2 ");
    }
    return 0;
}