/*In the program given in question the integer data type is used to store a number that is larger than the capacity of the integer data type. In short, the integer data type can only hold or store about 4bytes of information that is equivalent to a value in the range of -2,147,483,648 to 2,147,483,647. And, the input value is well above this range.
*/

#include<stdio.h>

int main() {
	float testInteger = 3000000000;//using float data type to resolve the issue
	printf("Number is %lf", testInteger);
}