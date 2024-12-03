#include <stdio.h>

void swapped(int *aPtr, int *bPtr, int *cPtr) {
    int temp;
    temp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *aPtr = temp;
}

int main() {
    int a=1, *aPtr=&a;
    int b=2, *bPtr=&b;
    int c=3, *cPtr=&c;
    
    printf("\nBefore Swapping: A=(%d), B=(%d), C=(%d)", a, b, c);
    swapped(aPtr, bPtr, cPtr);
    printf("\nAfter Swapping: A=(%d), B=(%d), C=(%d)", a, b, c);
    
}
