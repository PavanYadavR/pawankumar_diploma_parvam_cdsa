#include<stdio.h>
int main(){
    FILE*file=fopen("example.txt","r");
    if(file==NULL){
        printf("error opening file.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fclose(file);
    return 0;
}