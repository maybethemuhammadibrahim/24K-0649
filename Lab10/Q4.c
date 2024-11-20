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
int stringcomp();
void findBookByTitle(int n);
void findBookByAuthor(int n);

int main() {
    int n = 4; // Hardcoded the number of books and their respective data
    getData(n);
    printData(0,n);
    printf("\n");
    findBookByTitle(n);
    printf("\n");
    findBookByAuthor(n);

    return 0;
}

void getData(int end) {
    // Hardcoded book data
    struct book dummyBooks[] = {
        {"BookA", "Author1", {15, 5, 2020}, 500},
        {"BookD", "Author1", {15, 5, 2020}, 500},
        {"BookB", "Author2", {22, 8, 2018}, 300},
        {"BookC", "Author1", {10, 11, 2021}, 450}
    };

    for (int i = 0; i < end; i++) {
        books[i] = dummyBooks[i];
    }
}

void printData(int start, int end) {
    printf("\n\nThe Book/Books Are:\n===================");
    for (int i = start; i < end; i++) {
        printf("\nBook no         :%d", i + 1);
        printf("\nTitle           :%s", books[i].title);
        printf("\nAuthor          :%s", books[i].author);
        printf("\nPublication Date:%d/%d/%d", books[i].publicationDate.day, books[i].publicationDate.month, books[i].publicationDate.year);
        printf("\nPrice           :%d", books[i].price);
        printf("\n===================");
        printf("\n");

    }
}

void findBookByTitle(int n) {
    char title[50];
    int found;
    printf("Enter the title to search: ");
    scanf("%s", title);
    for (int i=0 ; i<n ; i++) {
        if (stringcomp(title, books[i].title) == 1) {
            //printf("%d",i);
            printData(i, i + 1);
            found=1;
        }
        else{
            found=0;
        }
    }
    found==0?printf("Book not Found"):printf("\n");
}

void findBookByAuthor(int n) {
    char author[50];
    int found;
    printf("Enter the author name to search: ");
    scanf("%s", author);
    for (int i=0 ; i<n ; i++) {
        if (stringcomp(author, books[i].author) == 1) {
            //printf("%d",i);
            printData(i, i + 1);
            found = 1;
        }
        else{
            found = 0;
        }
    }
    found==0?printf("Author not Found"):printf("\n");
}


int stringcomp(char arr1[], char arr2[]){
    int equal,i;
    if(strlen(arr1) == strlen(arr2)){
        for(i=0 ; i<strlen(arr1) ; i++){
            if(arr1[i] == arr2[i]){
                equal = 1;
            }
            else{
                equal = 0;
                break;
            }
        }
    }
    else{
        equal=0;
    }
    return equal;
}
