//c functions program
/*
author:moses
reg no:CT101/G/22682/24
date:24/10/2024
*/
#include<stdio.h>
#include<math.h>

// Function to calculate the charges per unit
float calculate_charge_per_unit(int units) {
    if (units <= 199) {
        return 1.20;
    } else if (units >= 200 && units < 400) {
        return 1.50;
    } else if (units >= 400 && units < 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}

// Function to calculate the total bill amount
float calculate_total_bill(int units, float charge_per_unit) {
    float total_bill = units * charge_per_unit;

    // Apply surcharge if bill exceeds 400 Kshs.
    if (total_bill > 400) {
        total_bill += total_bill * 0.15;
    }

    // Ensure minimum bill is 100 Kshs.
    if (total_bill < 100) {
        total_bill = 100;
    }

    return total_bill;
}

int main() {
    int customer_id, units_consumed;
    char customer_name[50];
    float charge_per_unit, total_amount;

    // Step 1: Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", customer_name); // Reads a single word as customer name
    printf("Enter Units Consumed: ");
    scanf("%d", &units_consumed);

    // Step 2: Calculate charge per unit based on the units consumed
    charge_per_unit = calculate_charge_per_unit(units_consumed);

    // Step 3: Calculate the total amount
    total_amount = calculate_total_bill(units_consumed, charge_per_unit);

    // Step 4: Display the results
    printf("\nElectricity Bill\n");
    printf("Customer ID      : %d\n", customer_id);
    printf("Customer Name    : %s\n", customer_name);
    printf("Units Consumed   : %d\n", units_consumed);
    printf("Charges per Unit : Ksh. %.2f\n", charge_per_unit);
    printf("Total Amount to Pay: Ksh. %.2f\n", total_amount);

    return 0;
}

