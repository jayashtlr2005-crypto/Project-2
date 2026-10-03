# Experiment 16: Library Book Management System (C)

## Aim
To create a menu-driven C program that allows users to add, view, and search for library books.

## Prerequisites
- A GCC compiler or any standard C compiler.
- Basic understanding of arrays, structures, loops, and standard input/output.

## Procedure
1. Define a structure to store each book's ID, title, and author.
2. Create an array of structures and initialize a counter for the number of books.
3. Display a menu to add a book, view all books, search by ID, or exit.
4. Read book details and store them in the next available array position.
5. For viewing, loop through the stored records and display their details.
6. For searching, compare the entered ID with each stored book ID and show the matching record.

## How to Compile and Run

### Using GCC:
```bash
gcc main.c -o library_management
./library_management
```

### On Windows (Command Prompt / PowerShell):
```powershell
gcc main.c -o library_management.exe
.\library_management.exe
```

## Conclusion
The program stored book details in an array of structures and supported adding, listing, and searching for books during execution.
