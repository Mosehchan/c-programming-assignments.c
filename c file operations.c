//c programming file operations program
/*
author:moses
reg no:CT101/G/22682/24
date:29/10/2024
*/
#include <stdio.h>
#include <stdlib.h>

// Structure to hold student information
struct Student {
    char name[50];
    int marks;
};

// Function to write 5 students to "students.txt"
void writeFiveStudents() {
    struct Student students[5];
    FILE *file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    int i;
	for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);

        // Write to the file
        fprintf(file, "%s %d\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data written to file successfully.\n");
}

// Function to read `n` students and append them to "students.txt"
void appendNStudents() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    FILE *file = fopen("students.txt", "a");  // Open in append mode

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    int i;
	for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);

        // Write to the file
        fprintf(file, "%s %d\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data appended to file successfully.\n");
}

// Function to write students using fwrite() and read them back
void writeAndReadStudentsWithFwrite() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Reading student data
    int i;
    for(i=0;i<n;i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Writing data to a file using fwrite()
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data written to file successfully.\n");

    // Reading data from the file
    struct Student readStudents[n];
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fread(readStudents, sizeof(struct Student), n, file);
    fclose(file);

    // Displaying the read data
    printf("\nStudents Data from File:\n");
    for (i=0;i<n;i++) {
        printf("Name: %s, Marks: %d\n", readStudents[i].name, readStudents[i].marks);
    }
}

// Main function to choose between the three parts
int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Write 5 students to a file\n");
    printf("2. Append n students to a file\n");
    printf("3. Write and read students using fwrite\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            writeFiveStudents();
            break;
        case 2:
            appendNStudents();
            break;
        case 3:
            writeAndReadStudentsWithFwrite();
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}


