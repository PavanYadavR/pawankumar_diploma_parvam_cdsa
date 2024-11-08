#include<stdio.h>
int main(){
    int n;
    int min;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     min=arr[0];
    }

    printf("the arr elements are:");
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("the min number is:%d",min);
    return 0;
}