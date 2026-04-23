#include <stdio.h>
#include <string.h>

int main() {
    char questions[5][100];  // 5 questions, each up to 100 chars

    // Input questions
    for (int i = 0; i < 5; i++) {
        printf("Enter question %d: ", i + 1);
        fgets(questions[i], sizeof(questions[i]), stdin);
    }

    // Display questions
    printf("\nStored Questions:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d: %s", i + 1, questions[i]);
    }

    return 0;
}