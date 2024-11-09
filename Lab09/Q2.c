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

