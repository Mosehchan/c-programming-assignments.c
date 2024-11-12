//program to calculate total amount payable and printing out requested solutions while using for loop
/*
author:moses
registration number:CT101/G/22682/24
date:17/10/2024
*/
//preprocessor directive
#include <stdio.h>

int main() {
  int CustomerID, UnitConsumed;
  char CustomerName[50];
  float ChargesPerUnit, TotalAmount, Surcharge;
  int i = 0;

  // Prompt the user for input
  printf("Enter Customer ID: ");
  scanf("%d", &CustomerID);
  printf("Enter Customer Name: ");
  scanf("%s", CustomerName);
  printf("Enter Units Consumed: ");
  scanf("%d", &UnitConsumed);

  // Calculate the charges per unit
  while (i < 1) {
    if (UnitConsumed <= 199) {
      ChargesPerUnit = 1.20;
    } else if (UnitConsumed <= 399) {
      ChargesPerUnit = 1.50;
    } else if (UnitConsumed <= 599) {
      ChargesPerUnit = 1.80;
    } else {
      ChargesPerUnit = 2.00;
    }
    i++;
  }

  // Calculate the total amount
  TotalAmount = ChargesPerUnit * UnitConsumed;

  // Apply surcharge if the bill exceeds Kshs. 400
  i = 0;
  while (i < 1) {
    if (TotalAmount > 400) {
      Surcharge = TotalAmount * 0.15;
      TotalAmount += Surcharge;
    }
    i++;
  }

  // Ensure the minimum bill is Kshs. 100/-
  i = 0;
  while (i < 1) {
    if (TotalAmount < 100) {
      TotalAmount = 100;
    }
    i++;
  }

  // Display the output
  printf("\n------------------------------------\n");
  printf("Customer ID: %d\n", CustomerID);
  printf("Customer Name: %s\n", CustomerName);
  printf("Units Consumed: %d\n", UnitConsumed);
  printf("Charges per Unit: %.2f\n", ChargesPerUnit);
  printf("Total Amount to Pay: %.2f\n", TotalAmount);
  printf("------------------------------------\n");

  return 0;
}