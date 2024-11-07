#include<stdio.h>
int add(){
    int x=10,y=20;
    return x+y;
   
}
int main(){
    //int a=10,b=20;
    int res=add();//call_function
  printf("%d",res);
    return 0;
}