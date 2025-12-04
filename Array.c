#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Declare an array of structures for 3 students
    struct Student students[3];
    int i;

    printf("Enter information for 3 students:\n");

    // Loop to take input for each student
    for (i = 0; i < 3; ++i) {
        printf("\nFor student %d:\n", i + 1);
        printf("Enter name: ");
        // Using scanf for name (assumes no spaces in name)
        scanf("%s", students[i].name); 
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Displaying Student Information ---\n");

    // Loop to print the details of each student
    for (i = 0; i < 3; ++i) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.1f\n", students[i].marks);
    }

    return 0;
}


