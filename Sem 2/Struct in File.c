#include <stdio.h>
#include <stdlib.h>

// Define the structure for book information
typedef struct emp
{
    int bookid;
    char bname[100];
    float price;
} Book;

int main() {
    int n, i;
    FILE *fptr;

    // Ask the user for the number of books
    printf("Enter the number of books: ");
    scanf("%d", &n);
    Book books[n];

    // Open the file for writing
    fptr = fopen("books.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    // Accept books information and write to the file
    for (i = 0; i < n; i++) {
        printf("Enter book %d id, name, and price: ", i+1);
        scanf("%d %s %f", &books[i].bookid, books[i].bname, &books[i].price);
        fprintf(fptr, "%d %s %.2f\n", books[i].bookid, books[i].bname, books[i].price);
    }

    // Close the file
    fclose(fptr);

    // Open the file for reading
    fptr = fopen("books.txt", "r");
    if (fptr == NULL) 
    {
        printf("Error opening file\n");
        exit(1);
    }

    // Read the file and display the books information
    printf("\nBooks Information:\n");
    for (i = 0; i < n; i++) 
    {
        fscanf(fptr, "%d %s %f\n", &books[i].bookid, books[i].bname, &books[i].price);
        printf("Book ID: %d, Name: %s, Price: %.2f\n", books[i].bookid, books[i].bname, books[i].price);
    }

    // Close the file
    fclose(fptr);

    return 0;
}
