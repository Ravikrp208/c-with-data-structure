#include <stdio.h>

// Define a structure
struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct Student s1;

    // Assign values
    s1.id = 1;
    strcpy(s1.name, "Ali");
    s1.marks = 85.5;

    // Print values
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
