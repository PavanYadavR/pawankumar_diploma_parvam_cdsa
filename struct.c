
#include <stdio.h>
#include <string.h>
struct person {
    int age;
    char name[20];
    float marks;
};
int main() {
    struct person p1 = {20, "abc", 40.4};
    printf("Age is: %d\n", p1.age);
    printf("Name is: %s\n", p1.name);
    printf("Marks is: %.2f\n", p1.marks);
    return 0;
}
