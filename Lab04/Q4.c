/*Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else.*/
#include<stdio.h>

int main(){
	char input;
	printf("Input any character:");
	scanf("%c",&input);
	
	if (input>= 'a' && input<='z'){
		printf("Your input is a small alphabet");
	}
	else if (input>= 'A' && input<='Z'){
		printf("Your input is a capital alphabet");
	}
	else if (input>= '0' && input<='9'){
		printf("Your input is a digit");
	}
	else{
		printf("Your input is a special chracter");
	}
}