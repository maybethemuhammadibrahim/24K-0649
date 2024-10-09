#include<stdio.h>

int main(){
    int number, i;
    printf("Enter a number to generate a fabionacci series:");
    scanf(" %d",&number);
    
    if(number==1){
        printf("%d is neither composite nor prime.\n",number);
        return 0;
         }
    if(number==2){
        printf("%d is prime\n",number);
    }
  
    for(i=2;i<number;i++){
        if(number%i == 0){
            printf("%d is not prime because it is divisble by %d\n",number,i);
            return 0;
        }
    }
    printf("%d is Prime\n", number);

    int first_term=0, second_term=1;
    int third_term=0;

    printf("FABIONACCI SERIES UPTILL %d \n%d \n%d \n",number, first_term, second_term);

    while(third_term<number){
        third_term = first_term + second_term;
        first_term = second_term;
        second_term = third_term;
        if(third_term<number)//does not let the series exceed the number(input)
        {
            printf("%d \n",third_term);
        }    
    }
}
