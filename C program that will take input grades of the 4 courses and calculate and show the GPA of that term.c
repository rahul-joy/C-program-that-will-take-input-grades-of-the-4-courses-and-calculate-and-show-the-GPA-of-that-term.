#include <stdio.h>

int main() {
    int numCourses = 4;
    char grades[numCourses];
    double gpa = 0.0;

    printf("Enter the grades for the 4 theory courses:\n");

    for (int i = 0; i < numCourses; i++) {
        printf("Enter the grade for Course %d (A, B, C, D, or F): ", i + 1);
        scanf(" %c", &grades[i]);  // Note the space before %c to consume the newline character

        // Calculate GPA based on grades
        switch (grades[i]) {
            case 'A':
                gpa += 4.0;
                break;
            case 'B':
                gpa += 3.0;
                break;
            case 'C':
                gpa += 2.0;
                break;
            case 'D':
                gpa += 1.0;
                break;
            case 'F':
                gpa += 0.0;
                break;
            default:
                printf("Invalid grade entered for Course %d. Please enter A, B, C, D, or F.\n", i + 1);
                i--;  // Decrement the loop variable to re-enter the grade
        }
    }

    // Calculate the GPA
    gpa /= numCourses;

    // Output the GPA
    printf("Your GPA for the semester is: %.2f\n", gpa);

    return 0;
}
