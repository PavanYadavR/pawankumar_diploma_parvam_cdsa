#include<stdio.h>
int main(){
   int arr[]={15,28,34,46,54};
   int sum=0;
   for(int i=0;i<=4;i++)
   { 
    printf("%d",arr[i]);
    sum+=arr[i];
   }
   printf("sumof arr:%d",sum);
         return 0;
}

