// #include <stdio.h>

// struct student {
//     int salary;
//     char name[50];
//     char address[100];
// };

// int main() {
//     struct student x[5];

//     for(int i = 0; i < 5; i++) {

//         printf("Enter salary: ");
//         scanf("%d", &x[i].salary);

//         getchar(); // clear buffer

//         printf("Enter name: ");
//         gets(x[i].name);

//         printf("Enter address: ");
//         gets(x[i].address);
//     }



//     for(int i = 0; i < 5; i++) {

//         printf("\nSalary: ");
//         printf("%d", & x[i].salary);
//         printf("Name: ");
//         putc(x[i].name);
//         printf("Address");
//         putc(x[i].address)
//     }
      

//     return 0;
// }

#include <stdio.h>

struct student {
    int salary;
    char name[50];
    char address[100];
};

int main() {
    struct student x[5];

    printf("Enter the student data\n");

    for(int i = 0; i < 5; i++) {

        printf("Enter salary: ");
        scanf("%d", &x[i].salary);

        printf("Enter name: ");
        scanf("%s", x[i].name);

        printf("Enter address: ");
        scanf("%s", x[i].address);
    }

    printf("\n--- Student Details ---\n");

    for(int i = 0; i < 5; i++) {


        printf("Salary: %d\n", x[i].salary);
        printf("Name: %s\n", x[i].name);
        printf("Address: %s\n", x[i].address);
    }

    return 0;
}
