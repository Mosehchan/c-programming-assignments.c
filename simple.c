//program to calculate simple interest
/*
author:moses
reg. no:CT101/G/22682/24
date:2/10/2024
*/
//preprocessor directive
#include <stdio.h>
int main(){
    float principal,time,interest,si;

    printf("Enter the principal amount: ");
    scanf("%f",&principal);

    printf("Enter the time(in years): ");
    scanf("%f",&time);

    printf("Enter the rate of interest(in percentage): ");
    scanf("%f",&interest);

    /*print the results*/
    si=(principal*time*interest)/100;
printf("the si :%.2f",si);
    return 0;

}