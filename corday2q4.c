
#include<stdio.h>
int main(){
    int x;
    printf("enter the marks of student below:");
    scanf("%d",&x);
    if((x>=60)&&(x<=69)){
        printf("THE Evaluted grade of student is 'D'\n");
    }
    else if((x>=70)&&(x<=79)){
        printf("the grade of student is 'C'\n");
        }
    else if((x>=80)&&(x<=89)){
        printf("the grade of student is 'B'\n");
        }
    else if((x>=90)&&(x<=99)){
        printf("the grade of student is 'A'\n");
        }
    else{
        printf("the student has failed ");
    }
}
