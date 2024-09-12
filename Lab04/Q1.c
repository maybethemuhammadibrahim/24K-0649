#include <stdio.h>
/*Write a C program to check whether a number is multiple of 3 or not. If it is
then print “This number is multiple of 3”, otherwise print “This number is not
multiple of 3”.*/
int main() {
	int number;
	printf("Enter Number: ");
	scanf(" %d", &number);
	if (number%3 == 0)
	{	printf("%d is a multiple of 3", number);}
	
	else
	{	printf("%d is not a multiple of 3", number);}
return 0;
}