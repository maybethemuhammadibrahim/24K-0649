#include <stdio.h>

int max(int arr[],int length){
    return arr[length-1];
}
int min(int arr[]){
   return arr[0];
}
int arrcopy(int final[],int initial[],int length){
    for(int i=0; i<length ; i++){
        final[i]=initial[i];
    }
}
void sortAscending(int arr[],int length){
    int temp;
    for(int i=0; i<length-1 ; i++){
        for(int j=0; j<length-1 ; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // for(int k=0; k<length ; k++){
    //     printf("%d",arr[k]);
    // }
}


int main(){
    int n, arr[100], arr_cpy[100];
    printf("Enter the number of elements you want to enter(should be less than 100): ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(int i=0; i<n ; i++){
        printf("Element %d: ",i+1);
        scanf(" %d", &arr[i]);
    }
    
    arrcopy(arr_cpy,arr,n);
    sortAscending(arr_cpy,n);
    
    printf("The maximum in the given array is [%d]\n",max(arr_cpy,n));
    printf("The minimum in the given array is [%d]",min(arr_cpy));
    
}
