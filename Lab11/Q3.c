//only works with strings of equal lengths
#include <stdio.h>
#include <string.h>

int getLen(char *pointer){
    int i=0;
    while(pointer[i]!='\0'){
        i++;
    }
    return i;
}

void replace(FILE *file,char *find, char *word){
    char buffer[10];
    int length=0;
    while(fscanf(file,"%s", buffer) != EOF){
        // printf("%s",buffer);
        length = getLen(buffer)+length+1;
        if(!strcmp(buffer, find)){
            fseek(file, length-(getLen(buffer)+1), SEEK_SET);
            fprintf(file, "%s" , word);

        }


    }
    printf("Done");
}

int main(){
    FILE *file;
    file = fopen("file1.txt", "r+");
    if(file == NULL){
        printf("FILE NOT READ PROPERLY");
    }
    char find[10],word[10];
    
    printf("Enter the word you want to replace in the file(max 10 char): ");
    scanf("%s",find);
    printf("What do you want to replace in its place: ");
    scanf("%s",word);
    
    replace(file, find, word);

    fclose(file);
    return 0;
}
