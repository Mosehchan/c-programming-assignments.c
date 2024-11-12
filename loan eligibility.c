//program to calculate loan eligibity
/*
author:moses
registration number:CT101/G/22682/24
date:02/10/2024
*/
//preprocessor directive
#include <stdio.h>

int main() {
    int age;
    float income;

    // Get user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    // Loan eligibility check
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n"); 
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
