#include<stdio.h>
int main(){
   int a=10;
   int b=2;
   int c=a&b;
   printf("%d\n",c);
   printf("%d\n",sizeof(c));

   int d=a++;
   printf("%d\n",d);//10->11

   int e=++a;//12
   printf("%d\n",e);

   int f=a++ + ++b;
     printf("%d\n",f);
     int g=++a + b++;
     printf("%d\n",g);
   return 0;
}