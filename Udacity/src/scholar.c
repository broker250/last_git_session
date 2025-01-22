#include <stdio.h>
#include <string.h>

int main() {
    char college[100];
    char program[100];
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Choose the college you attended:\n");
    printf("1. Kepler College\n");
    printf("2. African Leadership University\n");
    printf("3. Carnegie Mellon University Africa\n");
    printf("4. University of Rwanda\n");
    printf("5. Massachusetts Institute of Technology\n");
    printf("Enter your choice (1-5): ");UU

    int collegeChoice;
    scanf("%d", &collegeChoice);

    switch (collegeChoice) {
        case 1:
            strcpy(college, "kepler college");
            break;
        case 2:
            strcpy(college, "african leadership university");
            break;
        case 3:
            strcpy(college, "carnegie mellon university africa");
            break;
        case 4:
            strcpy(college, "university of rwanda");
            break;
        case 5:
            strcpy(college, "massachusetts institute of technology");
            break;
        default:
            printf("Invalid college choice. Please select 1-5.\n");
            return 1;
    }

    printf("College entered: %s\n", college);

    // Convert college input to lowercase
    for (int i = 0; college[i] != '\0'; i++) {
        if (college[i] >= 'A' && college[i] <= 'Z') {
            college[i] = college[i] + 32;
        }
    }

    // Check if the college is in the list of eligible colleges
    if (strcmp(college, "kepler college") == 0 ||
        strcmp(college, "african leadership university") == 0 ||
        strcmp(college, "carnegie mellon university africa") == 0 ||
        strcmp(college, "university of rwanda") == 0 ||
        strcmp(college, "massachusetts institute of technology") == 0) {

        printf("Choose your desired IT program:\n");
        printf("1. Software Engineering\n");
        printf("2. Computer Science\n");
        printf("3. Information Technology\n");
        printf("4. Cybersecurity\n");
        printf("5. Data Science\n");
        printf("Enter your choice (1-5): ");

        int programChoice;
        scanf("%d", &programChoice);

        switch (programChoice) {
            case 1:
                strcpy(program, "Software Engineering");
                break;
            case 2:
                strcpy(program, "Computer Science");
                break;
            case 3:
                strcpy(program, "Information Technology");
                break;
            case 4:
                strcpy(program, "Cybersecurity");
                break;
            case 5:
                strcpy(program, "Data Science");
                break;
            default:
                printf("Invalid program choice. Please select 1-5.\n");
                return 1;
        }

        printf("Program entered: %s\n", program);

        printf("Enter your age: ");
        scanf("%d", &age);

        printf("%s, your application for %s at %s will be reviewed.\n", name, program, college);

    } else {
        printf("%s, you are not eligible for the scholarship because you did not attend a qualifying college.\n", name);
    }

    return 0;
}
