// Write a recursive function bubbleSort that takes an array and its size. It performs the
// bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
// they are in the wrong order.

#include <stdio.h>

void bubbleSort(int arr[],int n){
    // if(k<n){

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            bubbleSort(arr,n);
        }
    }
}

    


int main(){
    int arr[] = {5,3,2,5,2};
    int size = 5;//sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i=0; i<5 ; i++){
        printf("%d",arr[i]);
    }
}
