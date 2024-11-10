
#include <stdio.h>
#include <string.h>
struct person {
    int age;
    float marks;
    char name[20];
};
int main() {
    struct person p1;
    printf("Enter your name: ");
    fgets(p1.name, sizeof(p1.name), stdin);
    p1.name[strcspn(p1.name, "\n")] = 0;
    printf("Enter your Age: ");
    scanf("%d", &p1.age);
    printf("Enter your Marks: ");
    scanf("%f", &p1.marks);
    printf("\nYour Details:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Marks: %.2f\n", p1.marks);
    return 0;
}
