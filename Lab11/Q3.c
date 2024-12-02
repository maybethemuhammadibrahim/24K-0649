//The most simple approach would be to use fscanf to get each string from the file
// and compare with the word we want(implement a counter if needed). 


#include <stdio.h>
#include <string.h>

int getLen(char *pointer){
    int i=0;
    while(pointer[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    FILE *file;
    file = fopen("file1.txt", "r+");
    if(file == NULL){
        printf("FILE NOT READ PROPERLY");
    }
    char word[10],word2[10];
    char buffer[10];
    int length=0;
    printf("Enter the word you want to replace in the file(max 10 char): ");
    scanf("%s",word);
    printf("What do you;");
    scanf("%s",word2);
    
    while(fscanf(file,"%s", buffer) != EOF){
        // printf("%s",buffer);
        length = getLen(buffer)+length+1;
        if(!strcmp(buffer, word)){
            fseek(file, length-(getLen(buffer)+1), SEEK_SET);
            fprintf(file, "%s" , word2);

        }


    }
    printf("Done");
    fclose(file);
    return 0;
}
