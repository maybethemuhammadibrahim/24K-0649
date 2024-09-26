#include<stdio.h>

int main(){
	int weekday, vacation;
	printf("Enter the number of weekday(1-7): ");
	scanf("%d", &weekday);
	printf("Enter if the user is on a vacation(1 for True and 0 for False): ");
	scanf("%d", &vacation);
	
	if ((vacation==1) || (weekday>=6 && weekday<=7))
	{
		printf("Sleepin = True");
	}
	else if ((vacation==0) || (weekday>=1 && weekday<=5))
	{
		printf("Sleepin = False");
	}
	else 
	{
	    printf("Error");
	}
}
