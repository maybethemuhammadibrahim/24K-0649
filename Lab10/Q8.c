// Write a recursive function linearSearch that takes an array, its size, the target element
// to search for, and the current index. It checks if the target is at the current index and
// continues searching in the subsequent indices until it either finds the target or exhausts
// the array.
#include <stdio.h>

void linearSearch(int arr[], int n, int element, int index){
    if(arr[index]==element){
        printf("Element exists");
        return ;
    }
    else if(index == n){
        printf("Element does not exist");
        return ;
    }
    else{
        linearSearch(arr, n, element, index+1);
    }
}

int main(){
    //hardcoding values
    int arr[] = {2,3,1,5,2};
    int size = 5;
    int element = 1;
    int currentIndex = 0;
    linearSearch(arr, size, element, currentIndex);
}
