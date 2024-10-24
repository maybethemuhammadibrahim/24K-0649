#include <stdio.h>

int main() {
    int end, i, j, isPrime,num;
    printf("Enter the ending value of the range: ");
    scanf("%d", &num);

    printf("Prime numbers till %d are:\n", num);

    for (i = 0; i <= num; i++) {
        isPrime = 1;

     
        if (i < 2) {
            isPrime = 0; 
        } else if(i>2) {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = 0; 
                    break;
                }
            }
        }

        if (isPrime==1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
