#include <stdio.h>

struct Student {
    char name[20];
    int age;
    char course[20];
    float fee;
};

int main() {
    struct Student s[5];
    int i;

    // Input data le rahe hai
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Course: ");
        scanf("%s", s[i].course);

        printf("Fee: ");
        scanf("%f", &s[i].fee);
    }

    // Display data kar rahe hai

    printf("\n--- Student Details ---\n");
    
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d", i+1);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
        printf("\nCourse: %s", s[i].course);
        printf("\nFee: %.2f\n", s[i].fee);
    }

    return 0;
}
