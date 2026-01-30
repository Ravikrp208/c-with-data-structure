#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[30];
    float marks;
};

int main() {
    struct Employee e1;

    e1.id = 12;
    strcpy(e1.name, "ravi");   // correct way
    e1.marks = 35.5;

    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Marks: %.2f\n", e1.marks);

    return 0;
}
