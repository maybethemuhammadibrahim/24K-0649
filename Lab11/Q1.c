#include <stdio.h>

int main(){
    FILE *file1;
    FILE *file2;
    
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1");
        return 0; 
    }

    file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        printf("Error opening file2");
        fclose(file1);  
        return 0;
    }

    int temp;
    while (fscanf(file1, "%d", &temp) != EOF) {
        printf("%d",temp);
        fprintf(file2, "%d\n", temp);
    }

    fclose(file1);
    fclose(file2);

    printf("Data copied successfully!\n");

    return 0;
}
