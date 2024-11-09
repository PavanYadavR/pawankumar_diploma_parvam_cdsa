#include<stdio.h>
int main(){
    int row,col,i,j;
    printf("enter row");
    scanf("%d",&row);
    printf("enter col");
    scanf("%d",&col);
    printf("enter the elements of the row");
    int a[row][col];
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
       scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
