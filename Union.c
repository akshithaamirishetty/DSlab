#include <stdio.h>
#include <string.h>

// Define a union to store different student details
union StudentDetails {
    char first_name[50];
    char last_name[50];
    int roll_number;
    float marks;
};

int main() {
    // Declare a union variable
    union StudentDetails student;

    // Store and print the roll number
    student.roll_number = 101;
    printf("Roll Number: %d\n", student.roll_number);

    // Store and print the first name (this overwrites the roll number data)
    strcpy(student.first_name, "John");
    printf("First Name: %s\n", student.first_name);

    // Store and print the marks (this overwrites the first name data)
    student.marks = 92.5;
    printf("Marks: %.1f\n", student.marks);

    // If you try to access other members after the last assignment, 
    // their values will be corrupted or hold garbage data
    printf("Roll Number (corrupted data): %d\n", student.roll_number); 

    return 0;
}



