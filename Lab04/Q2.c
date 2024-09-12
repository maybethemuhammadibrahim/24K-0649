#include<stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if (number>0 && number%2==0 && number%10==0){
		printf("Number has been stored");
	}
	else{
		printf("Number not stored. It needs to be positve, divisible by 2 and 10");
	}
	
}