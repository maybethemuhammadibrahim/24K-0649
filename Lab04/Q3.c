#include <stdio.h>
/*Write a C program to check whether a number is multiple of 3 or not. If it is
then print “This number is multiple of 3”, otherwise print “This number is not
multiple of 3”.*/
int main() {
	int num1, num2, result;
	char _operator;
	printf("Enter Number 1: ");
	scanf(" %d", &num1);
	printf("Enter Number 2: ");
	scanf(" %d", &num2);
	printf("Enter Operator: ");
	scanf(" %c", &_operator);
	
	switch(_operator){
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		default:
			printf("Appropriate operator not entered");
	}
	
	printf("%d %c %d = %d",num1, _operator, num2, result);
	
return 0;
}