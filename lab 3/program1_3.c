//Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details.

#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char Author_name[60];
    float price;
};
void displayBook(struct Book Books);

int main(){
    struct Book Books[10];
    int n;
    printf("Enter the number of books: \n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("********BOOK DETAILS*********\n\n");
        printf("Book_id:\n");
        scanf("%d",&Books[i].book_id);
        printf("Enter the title of the book: ");
        scanf(" %[^\n]", Books[i].title);
        printf("Enter the Author name of the book: ");
        scanf(" %[^\n]", Books[i].Author_name);
        printf("Enter the price of the book:  ");
        scanf("%f",&Books[i].price);
    }
    printf("\n--- Displaying Book Details ---\n");
    for (int i = 0; i < n; i++) {
        displayBook(Books[i]);
    }
    return 0;
}
    void displayBook(struct Book b) {
    printf("\nBook ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.Author_name);
    printf("Price: %.2f\n", b.price);
}

    
