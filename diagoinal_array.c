#include<stdio.h>
int main(){
    int arr[3][3]={
        {2,3,7},
        {4,5,4},{4,7,8}};
    printf("Diagonal Elements:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                printf("%d ",arr[j][i]);//
            }
        }
    }
return 0;
}