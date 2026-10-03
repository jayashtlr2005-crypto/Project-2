#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
};

int main(void) {
    struct Book books[MAX_BOOKS];
    int count = 0, choice, id, found;

    while (1) {
        printf("\n--- Library Book Management ---\n");
        printf("1. Add Book\n2. View Books\n3. Search by ID\n4. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) break;
        getchar();

        if (choice == 1) {
            if (count == MAX_BOOKS) {
                printf("Book storage is full.\n");
                continue;
            }
            printf("Enter book ID: ");
            scanf("%d", &books[count].id);
            getchar();
            printf("Enter title: ");
            fgets(books[count].title, sizeof books[count].title, stdin);
            books[count].title[strcspn(books[count].title, "\n")] = '\0';
            printf("Enter author: ");
            fgets(books[count].author, sizeof books[count].author, stdin);
            books[count].author[strcspn(books[count].author, "\n")] = '\0';
            count++;
            printf("Book added successfully.\n");
        } else if (choice == 2) {
            if (count == 0) printf("No books available.\n");
            for (int i = 0; i < count; i++)
                printf("ID: %d | Title: %s | Author: %s\n",
                       books[i].id, books[i].title, books[i].author);
        } else if (choice == 3) {
            printf("Enter book ID to search: ");
            scanf("%d", &id);
            found = 0;
            for (int i = 0; i < count; i++) {
                if (books[i].id == id) {
                    printf("Found: %s by %s\n", books[i].title, books[i].author);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Book not found.\n");
        } else if (choice == 4) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
