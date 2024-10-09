#include<stdio.h>

int main(){
    int number=0;
    int temp, temp_number, new_number=0;
    printf("Program to check whether a number is armstrong or not:\n");
    printf("Enter a number: ");
    scanf(" %d", &number);
    temp_number = number;
    
    while(temp_number!=0){
        temp = temp_number % 10;
        
        //printf("%d",temp);
        new_number = new_number + (temp*temp*temp);
        //printf("%d",new_number);
        temp_number = temp_number/10;
    }

    if (new_number == number){
        printf("Given number is an armstrong number.");
    }
    else{
        printf("error");
    }
}
