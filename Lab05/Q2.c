#include<stdio.h>

int main(){
	int weekday, vacation;
	printf("Enter the number of weekday(1-7): ");
	scanf("%d", &weekday);
	printf("Enter if the user is on a vacation(1 for True and 0 for False): ");
	scanf("%d", &weekday);
	
	if (vacation==1)
	{
		printf("Sleepin = True");
	}
	else if (weekday>=6 && weekday<=7)
	{
		printf("Sleepin = True");
	}
	else
	{
		printf("Sleepin = False");
	}
}