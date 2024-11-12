//c structures program
/*
author:moses
reg_no:CT101/G/22682/24
date:10/10/2024
*/
#include <stdio.h>
#include <string.h>
struct book
{
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
} book1, book2;

int main()
{
    //struct book book1, book2;
    //strcpy(book1.title, "introduction to c programming");
    printf("enter the title: ");
    scanf("%s", &book1.title);
    //strcpy(book1.author, "john smith");
    printf("enter the author: ");
    scanf("%s", &book1.author);
    //book1.publication_year = 2022;
    printf("enter the publication_year: ");
    scanf("%d", &book1.publication_year);
    //strcpy(book1.ISBN, "9780131103627");
    printf("enter the ISBN: ");
    scanf("%s", &book1.ISBN);
    //book1.price = 49.99;
    printf("enter the price: ");
    scanf("%f", &book1.price);
    
    /*
    printf("title: %s \n", book1.title);
    printf("author: %s \n", book1.author);
    printf("publication_year: %d \n",book1.publication_year);
    printf("ISBN: %s \n",book1.ISBN);
    printf("price: %f \n", book1.price);
    */
       
        printf("title: %s \n ", book1.title);
        printf("author: %s \n", book1.author);
        printf("publication_year: %d \n", book1.publication_year);
        printf("ISBN: %s \n", book1.ISBN);
        printf("price: %f \n", book1.price);
        
    return 0;
}