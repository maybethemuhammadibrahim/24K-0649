// Write a recursive function bubbleSort that takes an array and its size. It performs the
// bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
// they are in the wrong order.

#include <stdio.h>

void bubbleSort(int arr[],int n,int i){
    static int sorted = 0, counter = 0;
    int temp;
    if(counter==n-1){
        return ;
    }
    else{
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] =temp;
            bubbleSort(arr,n,i+1);
            printf("sorting\n");
            counter = 0;
        }
        else{
            bubbleSort(arr,n,i+1);
            counter++;
        }
    }
}

int main(){
    int arr[] = {2,3,2,5,2};
    int size = 5;//sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size,0);
    for(int i=0; i<5 ; i++){
        printf("%d",arr[i]);
    }
}
