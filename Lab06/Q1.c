/*While*/

#include<stdio.h>
int main(){
    int input=0, sum=0;

    while(input!=0)
    {
        printf("Enter a Number: ");
        scanf("%d",&input);
        sum = sum+input;
    }

    printf("Your sum is: %d",sum);

}