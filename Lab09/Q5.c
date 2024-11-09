#include<stdio.h>

int strlength(char arr[]) {
    int counter = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        counter++;
    }
    return counter;
}

void strrev(char arr[]) {
    int len = strlength(arr);
    char temp;
    
    for (int i = 0; i < len / 2; i++) {
        temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }
}

void strcopy(char final[], char initial[]) {
    int i;
    for (i = 0; initial[i] != '\0'; i++) {
        final[i] = initial[i];
    }
    final[i] = '\0'; 
}

int main() {
    char str[100], str_cpy[100];
    printf("Enter string (cannot be more than 100 characters long): ");
    scanf("%99s", str); 
    
    strcopy(str_cpy, str);
    strrev(str_cpy);
    
    printf("Reversed string: %s\n", str_cpy);
    return 0;
}
