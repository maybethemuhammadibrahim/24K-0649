/*The type of loop to be used for user-input depends on the situation. 
In this particular code we are using a do-while loop because we want 
to run the loop atleast once for user-input and then decide wether we
want the program to continue or not */

#include<stdio.h>

int main(){
    int input, sum;
    input = 0;
    
    do
    {
        printf("Enter a Number: ");
        scanf("%d",&input);
        sum = sum+input;
    }while(input != 0);

    printf("Your sum is: %d",sum);

}
