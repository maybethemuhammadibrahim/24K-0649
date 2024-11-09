#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) 
        return 0;
    if (number == 2) 
        return 1;

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int number;
    printf("Enter the number to check: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Zero is neither prime nor composite\n");
        return 0;
    }

    int result = isPrime(number);
    result == 1 ? printf("Number is Prime\n") : printf("Number is not Prime\n");

    return 0;
}

