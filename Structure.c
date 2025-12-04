#include <stdio.h>

// Define a structure named 'Student'
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Declare a structure variable 's' of type 'struct Student'
    struct Student s;

    printf("Enter information of a student:\n");

    // Input Name
    printf("Enter name: ");
    // Use scanf for strings (stops at whitespace)
    scanf("%s", s.name); 

    // Input Roll Number
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    // Input Marks
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nDisplaying Information:\n");

    // Display the stored information
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks); // %.2f formats float to two decimal places

    return 0;
}

