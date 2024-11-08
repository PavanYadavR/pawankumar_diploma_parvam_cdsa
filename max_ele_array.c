#include<stdio.h>
int main(){
    int n;
    int max;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     max=arr[0];
    }

    printf("the arr elements are:");
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("the max number is:%d",max);
    return 0;
}