
#include <stdio.h>

int main() {
    int number, last_digit;
    printf("Enter number: ");
    scanf("%d", &number);
    
    last_digit = number % 10;
    
    (last_digit==0)?printf("Last Digit is zero"):(last_digit!=0)?printf("Last Digit non-zero"):printf("Some Error has occured");
    return 0;
}
