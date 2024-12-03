#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size,input=-1;
    printf("Enter initial size of array: ");
    scanf("%d",&size);
    arr = (int *)calloc(size,sizeof(int));
    if(arr == NULL){
        printf("error");
    }
    printf("Enter elements of Array: \n");
    for(int i=0 ; i<size ; i++){
        printf(">");
        scanf("%d",&arr[i]);
    }
    
    while(input != 0){
        printf("\nWhat operation to perform(Current Size=%d)\n0>Exit\n1>Resize array\n2>Find largest num\n>",size);
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            int newSize;
            printf("Enter new size of array: ");
            scanf("%d",&newSize);
            int *temp = (int *)realloc(arr, sizeof(int)*newSize);
            if(arr == NULL){
                printf("error");
            }
            temp = arr;
            if(newSize>size){
                printf("Enter elements of Array(Starting from %d): \n",size+1);
                for(int i=size ; i<newSize ; i++){
                    printf("%d>",i+1);
                    scanf("%d",&arr[i]);
                }
            }
            else if(size>newSize){
                printf("\nSome data will be lost\n");
            }
            printf("Printing the Array\n");
            for(int i=0 ; i<newSize ; i++){
            printf(">%d\n",arr[i]);
            }
            size = newSize;
            break;
        case 2:
            int max=0;
            for(int i=0 ; i<size ; i++){
                if(arr[i]>max){
                    max = arr[i];
                }
            }
            printf("The Largest Number in the array is %d\n",max);

        default:
            break;
        }
    }
    free(arr);
}
