#include<stdio.h>
void func() {
static int i=0;
printf("%d\n",i);
i++;
}
int main(){
for(int j=0; j<5; j++){
    func();
}
    return 0;
}