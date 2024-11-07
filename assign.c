#include<stdio.h>
int main (){
   int a=1;
   int b=6;
    
    if((a>5)||(b>5)){  //and 
        printf("a & b are greater than 5\n");
    }
    else{
        printf("a & b are not greater than 5\n");
    }
    if((a>5)&&(b>5)){ // or
        printf("a & b are greater than 5\n");
    }
    else{
        printf("a & b are not greater than 5\n");
    }
   int valid=1; // not valid
    int invalid=!valid;
    printf("%d\n",valid);
    printf("%d\n",invalid);
    return 0;

}