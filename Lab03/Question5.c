#include<stdio.h>

int main()
{
    int principal, interest, timeperiod;
    float interestrate;
    printf("Enter Principle in the range of 100Rs-1000000Rs ");
    scanf("%d",&principal);
    printf("Enter Rate of interest in the range of 5-10 percent ");
    scanf("%f", &interestrate);
    printf("Enter Time in the range of 1-10 years");
    scanf("%d", &timeperiod);
    
 
    interest = principal * (interestrate/100) * timeperiod;

    printf("Interest: %d", interest);

}