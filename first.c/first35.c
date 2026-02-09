// Nested Structures



#include <stdio.h>

// Define a structure for Author
struct Author {
    char name[50];
    int age;
};

// Define a structure for Book
struct Book {
    char title[100];
    struct Author author; // Nested structure
    float price;
};

int main() {
    struct Book book1;

    // Assign values to the book
    snprintf(book1.title, sizeof(book1.title), "C Programming Language");
    snprintf(book1.author.name, sizeof(book1.author.name), "Brian Kernighan");
    book1.author.age = 80;
    book1.price = 45.99;

    // Print the book details
    printf("Book Title: %s\n", book1.title);
    printf("Author Name: %s\n", book1.author.name);
    printf("Author Age: %d\n", book1.author.age);
    printf("Price: $%.2f\n", book1.price);

    return 0;
}
