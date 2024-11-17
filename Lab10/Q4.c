#include <stdio.h>
#include <string.h>

typedef struct date{
    int day;
    int month;
    int year;
} publicationDate;

struct book{
    char title[50];
    char author[50];
    struct date publicationDate;
    int price;
} books[50];

void getData(int end);
void printData(int start, int end);
void findBookByTitle(int n);

int main() {
    int n = 3; // Hardcoded the number of books
    getData(n);
    findBookByTitle(n);
    return 0;
}

void getData(int end) {
    // Hardcoded book data
    struct book dummyBooks[] = {
        {"BookA", "Author1", {15, 5, 2020}, 500},
        {"BookA", "Author1", {15, 5, 2020}, 500},
        {"BookB", "Author2", {22, 8, 2018}, 300},
        {"BookC", "Author1", {10, 11, 2021}, 450}
    };

    for (int i = 0; i < end; i++) {
        books[i] = dummyBooks[i];
    }
}

void printData(int start, int end) {
    printf("\n\nThe Books Are:\n===================");
    for (int i = start; i < end; i++) {
        printf("\nBook no         :%d", i + 1);
        printf("\nTitle           :%s", books[i].title);
        printf("\nAuthor          :%s", books[i].author);
        printf("\nPublication Date:%d/%d/%d", books[i].publicationDate.day, books[i].publicationDate.month, books[i].publicationDate.year);
        printf("\nPrice           :%d", books[i].price);
    }
}

void findBookByTitle(int n) {
    char title[50];
    int bookMatch = 0, index=-1;
    printf("Enter the title to search: ");
    scanf("%s", title);
    for (int i = 0; i < n; i++) {
        if (strcmp(title, books[i].title) == 0) {
            bookMatch = 1;
            index = i;
            break;
        }
        if (bookMatch == 1){
        printData(index, index + 1);
        } 
        else{
            printf("Book not found!\n");
        }
    }

    // if (bookMatch == 1){
    //     printData(index, index + 1);
    // } 
    // else{
    //     printf("Book not found!\n");
    // }
}
