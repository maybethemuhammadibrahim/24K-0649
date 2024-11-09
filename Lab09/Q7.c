#include <stdio.h>

void arrSorting(char arr[100][100],int words){
    char temp[100];
    int sorted=0;
     while (!sorted) {
        sorted = 1;
        for (int i = 0; i < words - 1; i++) {
            if (arr[i][0] > arr[i + 1][0]) { 
                for (int k = 0; k < 100; k++) {
                    temp[k] = arr[i][k];
                    arr[i][k] = arr[i + 1][k];
                    arr[i + 1][k] = temp[k];
                }
                sorted = 0; //marking it  as unsorted if a swap occurred
            }
        }
    }
}


int main(){
    char wordList[100][100];
    int n;
    printf("Enter the number of words you want to enter(cannot be more than 100): ");
    scanf("%d", &n);
    printf("Enter the words\n");
    for(int i=0;i<n;i++){
        printf("Word %d: ",i+1);
        scanf("%s",wordList[i]);
    }
    
    arrSorting(wordList,n);
    
    printf("The sorted words (on the basis of their first character are)\n");
    for(int i=0;i<n;i++){
        printf("Word %d:%s\n",i+1,wordList[i]);
    }
    
}
