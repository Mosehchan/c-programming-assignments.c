//program to calculate compound interest
/*
author:moses
registration number:CT101/G/22682/24
date:02/10/2024
*/
//preprocessor directive
#include <stdio.h>
int main(){
    float principal,time,interest,ci;
   
   printf("enter the principal amount:");
   scanf("%f",&principal);

   printf("enter the time(in years): ");
   scanf("%f",&time);

   printf("enter the interest(in percentage): ");
   scanf("%f",&interest);

   /*initialise principal=ci*/
   ci=principal;
   /*calculate compound interest*/
   for(int i=1;i<=time;i++)
   {
    ci=ci+(ci*interest/100);
   }
    printf("%f",ci);


    return 0;
   }