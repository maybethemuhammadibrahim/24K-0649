/*Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/

#include <stdio.h>

int isPrime(int number){
    int returnBool;
    for(int i=2;i<number;i++){
        if(number%i == 0){
            returnBool = 0;
            break;
        }
        else{
            returnBool =1;
        }
    }
    return returnBool;
}

int main(){
    int number;
    printf("Enter the number to check: ");
    scanf("%d",&number);
    if(number==0){
        printf("Zero is neither prime nor composite");
        return 0;
    }
    
    int result = isPrime(number);
    result==1?printf("Number is Prime"):printf("Number is not Prime");
}

