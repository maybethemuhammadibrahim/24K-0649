#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size,sum=0;
    int *sizeptr=&size;
    int *sumptr=&sum;
    
    
    printf("Enter Size of Array: ");
    scanf("%d",sizeptr);

    arr = (int *)malloc(sizeof(int)*size);
    if(arr == NULL){
        printf("Mem alloc failed");
    }
    for(int i=0 ; i<(*sizeptr) ; i++){
        scanf("%d",&arr[i]);
        (*sumptr) += arr[i];
    }
    printf("Sum is : %d",*sumptr);
    free(arr);
}
