#include <stdio.h>

// Structure definition for student details
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void main() {
	int i;
    // Array of structures to store details of 3 students
    struct Student students[3];

    // Input details for each student
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print details of each student
    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

}

