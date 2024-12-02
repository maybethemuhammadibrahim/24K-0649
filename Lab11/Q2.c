//The most simple approach would be to use fscanf to get each string from the file
// and compare with the word we want(implement a counter to count).
//use the strcmp to compare


#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    file = fopen("file1.txt", "r");
    if(file == NULL){
        printf("FILE NOT READ PROPERLY");
    }
    char word[10];
    char buffer[10];
    int counter=0;
    printf("Enter the word you want to find in the file(max 10 char): ");
    scanf("%s",word);
    

    while(fscanf(file,"%s", buffer) != EOF){
        // printf("%s",buffer);
        if(!strcmp(buffer, word)){
            counter++;
        }
    }
    printf("Your word appeared %d times in the file",counter);
    fclose(file);
    return 0;
}
