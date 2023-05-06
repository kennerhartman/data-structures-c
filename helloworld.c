/*

Peter is looking to keep track of 3 different books within a program.  He has given you the responsibility 
to make a program that will keep track of the following information:

Book one:

    - Title: The C Programming Language 2nd Edition
    - Author: Dennis Ritche
    - Description: A book about the C programming language, developed by Brian Kernighan and Dennis Ritchie
    - Year published: 1978

Book two:

    - Title: Maze Runner: The Maze Runner
    - Author: James Dashner
    - Description: “The story is set in a distant future, where a group of teens are mysteriously teleported 
    into a giant, stone maze. Not only has their memory been cleared, but they also have no indication as to 
    why they have ended up in this position and what means they must take to escape” (PPLD Book Reviews).
    - Year published: 2015

Book three:

    - Title: Percy Jackson: The Lightning Thief
    - Author: Rick Riordan
    - Description: “The Lightning Thief is a light-hearted fantasy about a modern 12-year-old boy who learns 
    that his true father is Poseidon, the Greek god of the sea. Percy sets out to become a hero by undertaking 
    a quest across the United States to find the entrance to the Underworld and stop a war between the gods” 
    (Rick Riordan, The Lightning Thief Rationale).
    - Year published: 2005 

    *No need to write to a text file, just print everything to the console*
*/

#include <stdio.h>
#include <string.h>

// because there is no such thing as objects in C, I must use structures to house data for Peter
struct Books { 
    char title[50];
    char author[50];
    char description[500];
    int yearPublished;
    int bookID;
};

// function to print each data type in the structure above
void printBook(struct Books book, int bookNumber) { 
    printf("\nBook number: %i", bookNumber);
    printf("\n%s", book.title);
    printf("\n%s", book.author);
    printf("\n%s", book.description);
    printf("\n%i\n", book.yearPublished);
}

int main() {
    printf("Hello world!\n");

    struct Books Book1;
    struct Books Book2;
    struct Books Book3;

    // Book #1

    strcpy(Book1.title, "The C Programming Language 2nd Edition");
    strcpy(Book1.author, "Brian Kernighan and Dennis Ritchie");
    strcpy(Book1.description, "A book about the C programming language, developed by Brian Kernighan and Dennis Ritchie");
    Book1.yearPublished = 1978;

    // Book #2

    strcpy(Book2.title, "Maze Runner: The Maze Runner");
    strcpy(Book2.author, "James Dashner");
    strcpy(Book2.description, "\"The story is set in a distant future, where a group of teens are mysteriously teleported "
    "into a giant, stone maze. Not only has their memory been cleared, but they also have no indication as to why they " 
    "have ended up in this position and what means they must take to escape\" (PPLD Book Reviews).");
    Book2.yearPublished = 2015;

    // Book #3

    strcpy(Book3.title, "Percy Jackson: The Lightning Thief");
    strcpy(Book3.author, "Rick Riordan");
    strcpy(Book3.description, "\"The Lightning Thief is a light-hearted fantasy about a modern 12-year-old boy who learns "
    "that his true father is Poseidon, the Greek god of the sea. Percy sets out to become a hero by undertaking a quest "
    "across the United States to find the entrance to the Underworld and stop a war between the gods\" "
    "(Rick Riordan, The Lightning Thief Rationale).");
    Book3.yearPublished = 2015;

    printBook(Book1, 1);
    printBook(Book2, 2);
    printBook(Book3, 3);

    return 0;
}