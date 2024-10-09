#include<stdio.h>

int main(){
    int number, i;
    printf("Enter a number to generate a fabionacci series:");
    scanf(" %d",&number);
    
    if(number==1){
        printf("%d is neither composite nor prime.",number);
        return 0;
         }
    if(number==2){
        printf("%d is prime",number);
    }
  
    for(i=2;i<number;i++){
        if(number%i == 0){
            printf("%d is not prime because it is divisble by %d",number,i);
            return 0;
        }
    }
    printf("%d is Prime", number);

    int first_term=0, second_term=1;
    int third_term;

    printf("FABIONACCI SERIES UPTILL %d \n%d \n%d \n",number, first_term, second_term);

    for (i=0; i<number; i++){
        third_term = first_term + second_term;
        first_term = second_term;
        second_term = third_term;
        printf("%d \n",third_term);
    }
}
