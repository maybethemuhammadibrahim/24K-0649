// Write a recursive function that takes an array and its size as input and prints all the
// elements.

#include <stdio.h>

void printArray(int arr[], int n, int counter){
    if(counter == n-1){
       printf("%d",arr[counter]);
    }
    else{
        printf("%d",arr[counter]);
        printArray(arr, n, counter+1);
    }
}

int main(){
    int arr[] = {3,5,2,3,2};
    int size = 5;//sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size,0);
}
