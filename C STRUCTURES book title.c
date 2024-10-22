//  C STRUCTURES book title
#include <stdio.h>
#include <string.h>

struct Book{
    char title[30];
    char author[30];
    char ISBN[16];
    int publication_year;
    float price;
}book1;

int main() {

    strcpy(book1.title,"Introduction to C Programming");
    strcpy(book1.author,"John Smith");
    strcpy(book1.ISBN,"9780131103627");
    book1.publication_year=2022;
    book1.price=49.99;
    
    
    printf("Title: %s\n",book1.title);
    printf("Author: %s\n",book1.author);
    printf("ISBN: %s\n",book1.ISBN);
    printf("Publication year: %d\n",book1.publication_year);
    printf("Price : $%.2f \n",book1.price);

    return 0;
}