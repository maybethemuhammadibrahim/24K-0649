#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *name,*id,*temp;
    int size,idSize;
    printf("Enter no. of chracters in your name(including the space)");
    scanf("%d",&size);

    name = (char *)calloc(size +1, sizeof(char));//+1 for '\0
    if(name == NULL){
        printf("ERROR");
    }

    getchar();
    printf("Enter Name: ");
    fgets(name, size + 1, stdin);
    // newline remover
    name[strcspn(name, "\n")] = 0;

    // scanf("%s",name);
    
    // printf("%s",name);

    printf("Enter no. of chracters in your ID(including the space)");
    scanf("%d",&idSize);

    id = (char *)calloc(idSize+1, sizeof(char)+1);//+1 for '\0
    if(id == NULL){
        printf("ERROR");
    }

    getchar();
    printf("Enter Id: ");
    fgets(id, idSize+1, stdin);
    // printf("%s",id);
    id[strcspn(id, "\n")] = 0;
    id[strlen(id)] = ' ';

    id = (char *)realloc(id, (size+idSize+1)*sizeof(char));
    if(id == NULL){
        printf("ERROR");
    }
    strcat(id, name);
    printf("%s",id);
    free(id);
    free(name);
}
