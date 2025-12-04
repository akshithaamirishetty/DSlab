#include <stdio.h>

// Define an enumeration for possible student grade levels
enum GradeLevel {
    FRESHMAN = 9,
    SOPHOMORE = 10,
    JUNIOR = 11,
    SENIOR = 12
};

int main() {
    // Declare a variable of type enum GradeLevel
    enum GradeLevel studentGrade;

    // Assign a value using the defined constants
    studentGrade = JUNIOR;

    // Print the grade level using the integer value associated with the enum
    printf("The student is a: JUNIOR\n");
    printf("This corresponds to grade level: %d\n", studentGrade);

    // You can also compare enum values
    if (studentGrade == JUNIOR) {
        printf("The student is in their third year.\n");
    }

    return 0;
}




