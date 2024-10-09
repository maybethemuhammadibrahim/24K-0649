#include<stdio.h>

int main(){
    int number;
    printf("Enter a number:");
    scanf(" %d",&number);
    
    if(number==1){
        printf("%d is neither composite nor prime.",number);
        return 0;
         }
    if(number==2){
        printf("%d is prime",number);
    }
  
    for(int i=2;i<number;i++){
        if(number%i == 0){
            printf("%d is not prime because it is divisble by %d",number,i);
            break;
        }
    }
    printf("%d is Prime", number);
}
