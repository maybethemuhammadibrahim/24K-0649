#include <stdio.h>

int main(){
    FILE *file1;
    FILE *file2;
    int ch;
    file1 = fopen("file1.txt","r");
    if(file1 == NULL){
        printf("FILE NOT READ");
    }
    
    file2 = fopen("file2.txt","w+");
    if(file2 == NULL){
        printf("FILE2 NOT READ");
    }

    while((ch = fgetc(file1)) != EOF){
        char buffer = (char)ch;
        fprintf(file2, "%c", buffer);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
