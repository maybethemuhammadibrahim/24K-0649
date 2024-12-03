#include <stdio.h>
#include <stdlib.h>

int main(){
    char *name;
    int size;
    printf("Enter no. of chracters in your name(including the space)");
    scanf("%d",&size);

    name = (char *)calloc(size, sizeof(char)+1);//+1 for '\0
    if(name == NULL){
        printf("ERROR");
    }

    getchar();
    printf("Enter Name: ");
    fgets(name, size, stdin);
    printf("%s",name);
}
