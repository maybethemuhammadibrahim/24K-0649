#include<stdio.h>
int main(){
    int arr[1000];//unable to pass variable of size in place of 1000
    int counter[1000]={0};
    int i,size;
    printf("Enter the Size Of Array: ");
    scanf("%d",&size);
    
    printf("Enter %d numbers:\n",size);
    for(i=0;i<size;i++){
        printf("Number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++){
        counter[arr[i]]++;
    }
    
    printf("\nElements Summary\n");
    for(i=0;i<size;i++){
        if(counter[arr[i]]>1){
        printf("Number %d occurs %d times\n",arr[i],counter[arr[i]]);
        counter[arr[i]]=0;
        }   
    }
}
