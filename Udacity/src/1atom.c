#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include the ctype.h header file

// Structure to store student information
struct Student {
    char name[50];
    int marks;
    char gender;
};

int main() {
    struct Student students[10];
    int numBoys = 0;
    int numGirls = 0;

    printf("Enter information for 10 students:\n");

    for (int i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%d", &students[i].marks);

        // Input validation for gender
        do {
            printf("Gender (B/G): ");
            scanf(" %c", &students[i].gender);
            students[i].gender = toupper(students[i].gender); // Convert to uppercase for easier comparison

            if (students[i].gender == 'B') {
                numBoys++;
            } else if (students[i].gender == 'G') {
                numGirls++;
            } else {
                printf("Invalid gender. Please enter B for Boy or G for Girl.\n");
            }
        } while (students[i].gender != 'B' && students[i].gender != 'G');

        // Check if we have enough boys or girls
        if (numBoys >= 3 && numGirls >= 7) {
            break; // Stop taking input if we have the required number
        }
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 10; i++) {
        printf("Name: %s, Marks: %d, Gender: %c\n",
               students[i].name, students[i].marks, students[i].gender);
    }

    return 0;
}
