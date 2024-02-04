#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>

// Structure to represent a Course
/*struct Course {
    char course_code[10];
    char course_name[30];
};

// Structure to represent a Grade
struct Grade {
    int mark;
    char the_grade;
};

// Structure to represent a Student
struct Student {
    char reg_number[21];
    char name[51];
    int age;
    struct Course course;
    struct Grade grades;
    bool grades_calculated;
};

// Function to calculate grades based on the grading system
void calculateGrade(struct Grade *grade) {
    if (grade->mark > 69) {
        grade->the_grade = 'A';
    } else if (grade->mark > 59) {
        grade->the_grade = 'B';
    } else if (grade->mark > 49) {
        grade->the_grade = 'C';
    } else if (grade->mark > 39) {
        grade->the_grade = 'D';
    } else {
        grade->the_grade = 'E';
    }
}

// Function to add a student
void addStudent(struct Student students[], int *numStudents) {
    if (*numStudents < 40) {
        printf("Enter Registration Number: ");
        scanf("%s", students[*numStudents].reg_number);

        printf("Enter Name: ");
        scanf("%s", students[*numStudents].name);

        printf("Enter Age: ");
        scanf("%d", &students[*numStudents].age);

        printf("Enter Course Code: ");
        scanf("%s", students[*numStudents].course.course_code);

        printf("Enter Course Name: ");
        scanf("%s", students[*numStudents].course.course_name);

        students[*numStudents].grades_calculated = false;
        (*numStudents)++;
    } else {
        printf("Maximum number of students reached.\n");
    }
}

// Function to edit a student's details
void editStudent(struct Student students[], int numStudents) {
    char regNumber[21];
    printf("Enter Registration Number of the student to edit: ");
    scanf("%s", regNumber);

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].reg_number, regNumber) == 0) {
            printf("Edit Name: ");
            scanf("%s", students[i].name);

            printf("Edit Age: ");
            scanf("%d", &students[i].age);

            printf("Edit Course Code: ");
            scanf("%s", students[i].course.course_code);

            printf("Edit Course Name: ");
            scanf("%s", students[i].course.course_name);

            students[i].grades_calculated = false; // Reset grades flag after editing
            printf("Student details updated successfully.\n");
            return;
        }
    }

    printf("Student not found with the provided registration number.\n");
}

// Function to add marks and calculate grades
void addMarks(struct Student students[], int numStudents) {
    char regNumber[21];
    printf("Enter Registration Number of the student to add marks: ");
    scanf("%s", regNumber);

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].reg_number, regNumber) == 0) {
            if (!students[i].grades_calculated) {
                printf("Enter Marks: ");
                scanf("%d", &students[i].grades.mark);

                calculateGrade(&students[i].grades);
                students[i].grades_calculated = true;
                printf("Marks and grades added successfully.\n");
            } else {
                printf("Grades have already been calculated and cannot be altered.\n");
            }
            return;
        }
    }

    printf("Student not found with the provided registration number.\n");
}

int main() {
    struct Student students[40];
    int numStudents = 0;
    char choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add a student\n");
        printf("2. Edit a student's details\n");
        printf("3. Add marks and calculate grades\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                addStudent(students, &numStudents);
                break;

            case '2':
                editStudent(students, numStudents);
                break;

            case '3':
                addMarks(students, numStudents);
                break;

            case '4':
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != '4');

    return 0;
}
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Structure to represent a Course
struct Course {
    char course_code[10];
    char course_name[30];
};

// Structure to represent a Grade
struct Grade {
    int mark;
    char the_grade;
};

// Structure to represent a Student
struct Student {
    char reg_number[21];
    char name[51];
    int age;
    struct Course course;
    struct Grade grades;
    bool grades_calculated;
};

// Function to calculate grades based on the grading system
void calculateGrade(struct Grade *grade) {
    if (grade->mark > 69) {
        grade->the_grade = 'A';
    } else if (grade->mark > 59) {
        grade->the_grade = 'B';
    } else if (grade->mark > 49) {
        grade->the_grade = 'C';
    } else if (grade->mark > 39) {
        grade->the_grade = 'D';
    } else {
        grade->the_grade = 'E';
    }
}

// Function to add a student with details and grades
void addStudentWithGrades(struct Student *student) {
    printf("Enter Registration Number: ");
    scanf("%s", student->reg_number);

    printf("Enter Name: ");
    scanf("%s", student->name);

    printf("Enter Age: ");
    scanf("%d", &student->age);

    printf("Enter Course Code: ");
    scanf("%s", student->course.course_code);

    printf("Enter Course Name: ");
    scanf("%s", student->course.course_name);

    printf("Enter Marks: ");
    scanf("%d", &student->grades.mark);

    calculateGrade(&student->grades);
    student->grades_calculated = true;

    printf("Student details and grades added successfully.\n");
}

// Function to edit a student's details
void editStudentDetails(struct Student *student) {
    printf("Enter new Name: ");
    scanf("%s", student->name);

    printf("Enter new Age: ");
    scanf("%d", &student->age);

    printf("Enter new Course Code: ");
    scanf("%s", student->course.course_code);

    printf("Enter new Course Name: ");
    scanf("%s", student->course.course_name);

    printf("Enter new Marks: ");
    scanf("%d", &student->grades.mark);

    calculateGrade(&student->grades);
    student->grades_calculated = true;

    printf("Student details updated successfully.\n");
}

int main() {
    struct Student student;
    bool studentEntered = false;
    char choice;

    // Prompt for user details and grades
    addStudentWithGrades(&student);
    studentEntered = true;

    // Options menu
    do {
        printf("\nMenu:\n");
        printf("1. Calculate grades\n");
        printf("2. Edit a student's details\n");
        printf("3. Exit\n");

        // Prompt for user choice
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                if (studentEntered) {
                    // Calculate and display grades
                    printf("Calculating grades...\n");
                    printf("Grade: %c\n", student.grades.the_grade);
                } else {
                    printf("No student details entered yet. Add a student first.\n");
                }
                break;

            case '2':
                if (studentEntered) {
                    // Edit a student's details
                    editStudentDetails(&student);
                } else {
                    printf("No student details entered yet. Add a student first.\n");
                }
                break;

            case '3':
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }
    } while (choice != '3');

    return 0;
}

