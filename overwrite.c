#include<stdio.h>
int main(){
    FILE*file=fopen("example.txt","w");
    if(file==NULL){
        printf("error creating file.\n");
        return 1;
    }
    fprintf(file,"This is the first line.\n");
    fprintf(file,"writing to file will overraid its contents\n");
    fclose(file);
    printf("File written successfully in write mode.\n");
    return 0;
}