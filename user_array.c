#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("the %d elements of the array:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the arr elements are ");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);}
    return 0;
}