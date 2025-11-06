/*
Name : Dennis mwangi k
Reg : CT101/G/26506/25
Description : a  file for borrowed books
*/

//header file

#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];
    char choice;

    fp = fopen("borrowed_books.txt", "a");  // Open file in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter book title: ");
        fgets(title, sizeof(title), stdin); // read book title

        fprintf(fp, "%s", title); // write title to file
        printf("Book title stored successfully!\n");

        printf("Do you want to add another book? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // to clear newline from buffer
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("All entries have been saved.\n");

    return 0;
}