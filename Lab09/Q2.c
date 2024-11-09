/*Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/

#include <stdio.h>

void swapIntegers(int numbers[2]){
    int temp;
    temp = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = temp;
}

int main(){
    int numbers[2];
    printf("Enter first number: ");
    scanf("%d",&numbers[0]);
    printf("Enter second number: ");
    scanf("%d",&numbers[1]);
    swapIntegers(numbers);
    printf("Now\n");
    printf("The first number is %d\n",numbers[0]);
    printf("The second number is %d",numbers[1]);
}

