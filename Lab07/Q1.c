//Shifting of array by one towards right
#include<stdio.h>

int main()
{    
    int size = 6,i;
    int arr[6] = {1,2,3,4,5,6};
    
    //storing last element in a variable to avoid data loss in overflow
    int last = arr[size-1];
    for(i=size-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    
    for(i=0;i<size;i++){
        printf("%d,",arr[i]);
        
    }
}
