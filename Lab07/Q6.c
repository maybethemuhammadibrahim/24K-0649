#include<stdio.h>
int main(){
    int arr[10];
    int counter[1000]={0};
    int i,size=10;
    printf("Enter 10 numbers:\n");
    for(i=0;i<size;i++){
        printf("Number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++){
        counter[arr[i]]++;
    }
    
    printf("\nElements Summary\n");
    for(i=0;i<size;i++){
        if(counter[arr[i]]>=1){
        printf("Element %d comes %d times\n",arr[i],counter[arr[i]]);
        counter[arr[i]]=0;
        }   
    }
}
