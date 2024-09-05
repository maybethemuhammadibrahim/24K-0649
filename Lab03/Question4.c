#include<stdio.h>

int main()
{
	float car_average;
	printf("Enter Vehicle's Fuel Average: ");
	scanf("%f", &car_average);
	
	float fuel_consumed_one_way = 1207/car_average;
	float total_fuel = 2*fuel_consumed_one_way;

	float fuel_cost_1 = fuel_consumed_one_way * 118;
	float fuel_cost_2 = fuel_consumed_one_way * 123;
	float total_cost = fuel_cost_1 + fuel_cost_2;

	printf("the total cost of fuel is %.3lf Rupees.\n", total_cost);
	printf("the total fuel consumed is: %.3lf Litres", total_fuel); 
	return 0;
}