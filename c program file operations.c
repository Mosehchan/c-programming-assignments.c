//c program file operations.c
/*
author:moses
reg no:CT101/G/22682/24
date:29/10/2024
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100

// Function prototypes
void writeToFile();
void readFromFile();
void appendToFile();

int main() {
    int choice;
    do {
        printf("\nChoose an operation:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void writeToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char sentence[MAX_LEN];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, MAX_LEN, stdin);

    if (fputs(sentence, file) == EOF) {
        perror("Error writing to file");
    } else {
        printf("Successfully written to file.\n");
    }

    fclose(file);
}

void readFromFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char buffer[MAX_LEN];
    printf("Contents of the file:\n");
    while (fgets(buffer, MAX_LEN, file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
}

void appendToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char sentence[MAX_LEN];
    printf("Enter a sentence to append (up to 100 characters): ");
    fgets(sentence, MAX_LEN, stdin);

    if (fputs(sentence, file) == EOF) {
        perror("Error appending to file");
    } else {
        printf("Successfully appended to file.\n");
    }

    fclose(file);
}
