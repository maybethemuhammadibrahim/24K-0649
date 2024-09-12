/*Given a positive integer denoting n, do the following:
a. If 1&lt;=n&lt;=9, print lowercase English words corresponding to the
numbers e.g. (one for 1, two for 2)
b. If n&gt;9 print greater then 9*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number 1-9: ");
    scanf("%d",&n);
    
    if (n<0){n = -1*n;}
    
    if (n>=0 && n<=9){
        switch(n){
            case 1:
            printf("one");
            break;
            case 2:
            printf("two");
            break;
            case 3:
            printf("three");
            break;
            case 4:
            printf("four");
            break;
            case 5:
            printf("five");
            break;
            case 6:
            printf("six");
            break;
            case 7:
            printf("seven");
            break;
            case 8:
            printf("eight");
            break;
            case 9:
            printf("nine");
            break;
            case 0:
            printf("zero");
            break;
            default:
            printf("Error");
        }
    }
    else{
        printf("Entered number is greater than 9");
    }
}
