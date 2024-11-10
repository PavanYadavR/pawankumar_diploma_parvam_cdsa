#include <stdio.h>
struct person {
    int age;
    float marks;
    char name[20];
};
int main() {
    struct person p1 = {78, 90.99, "Ajay"};
    struct person *ptr = &p1;
    printf("\nYour Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}
