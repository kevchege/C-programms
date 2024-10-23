#include <stdio.h>
#include <string.h>

struct Book {
    char title[30];
    char author[30];
    char ISBN[16];
    int publication_year;
    float price;
} book1;

int main() {
    // Initial book details
    strcpy(book1.title, "Introduction to C Programming");
    strcpy(book1.author, "John Smith");
    strcpy(book1.ISBN, "9780131103627");
    book1.publication_year = 2022;
    book1.price = 49.99;

     printf("\n--- Book Details ---\n");

    // Input book details from user
    printf("Enter title: ");
    scanf(" %[^\n]s", book1.title);  // Read until newline
    printf("Title: %s\n", book1.title);

    printf("Enter author: ");
    scanf(" %[^\n]s", book1.author);  // Read until newline
    printf("Author: %s\n", book1.author);

    printf("Enter ISBN: ");
    scanf("%s", book1.ISBN);
    scanf("%s", book1.ISBN);
    printf("ISBN: %s\n", book1.ISBN);


    printf("Enter publication year: ");
    scanf("%d", &book1.publication_year);
    printf("Publication Year: %d\n", book1.publication_year);

    printf("Enter price: ");
    scanf("%f", &book1.price);
    printf("Price: $%.2f\n", book1.price);

    // Output the entered details






    return 0;
}
