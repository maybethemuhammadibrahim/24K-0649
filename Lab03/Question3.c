

#include<stdio.h>

int main()
{
//input = tax rate, salary
	int tax_rate, salary, tax, salary_after_tax;
	printf("Enter your salary: ");
	scanf("%d",&salary);
	printf("Enter Tax rate in %: ");

	
//calculation and output = tax , money after tax
	scanf("%d",&tax_rate);
	tax = (tax_rate/100.00) * salary;
	salary_after_tax = salary - tax;
	printf("You have to pay Rs.%d in tax\n", tax);
	printf("Your salary ater tax will be Rs:%d", salary_after_tax);
}