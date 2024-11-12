//program to calculate fine due to days overdue
/*
author:moses
registration number:CT101/G/22682/24
date:02/10/2024
*/
//preprocessor directive
#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineRate;
    int fineAmount; 

    // Get user input
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date: ");
    scanf("%d", &dueDate);

    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate 
    if (daysOverdue <= 7 && daysOverdue > 0) { 
        fineRate = 20; 
    } else if (daysOverdue > 7 && daysOverdue <= 14) {
        fineRate = 50;
    } else if (daysOverdue > 14) {
        fineRate = 100;
    } else{
        fineRate = 0;
    }

    // Calculate fine amount
    fineAmount = daysOverdue * fineRate;

    // Display results
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: %d\n", fineRate);
    printf("Fine Amount: %d\n", fineAmount);

    return 0;
}