/*Write a program that asks for the number of calories and fat grams in a food.  The program
should display the percentage of calories that come from fat
One gram of fat has 9 calories, so Calories from fat = fat grams * 9
\Calories = fat grams * 9
The percentage of calories from fat can be calculated as: calories from fat/total calories
Input validation: Make sure the number of calories and fat grams are not less than 0.
Also, the number of calories from fat cannot be greater than the total number of calories.  If that
happens, display an error message indicating that either the calories or fat grams were incorrectly
entered.*/

#include<stdio.h>
int main(){
	float calories, fat, caloriesFromFat;
	printf("Enter Calories: ");
	scanf("%f", &calories);
	
	printf("Enter Fat(in grams): ");
	scanf("%f", &fat);
	
	if (calories<0 || fat<0){
		printf("Calories Or Fat values are entered as a negative number");
		return 0;
	}

	
	caloriesFromFat = (fat*9);
	
	if (caloriesFromFat > calories){
		printf("The value of Fat or calories is not correct");
	}
	
	float percentCalories = caloriesFromFat/calories;
	
	printf("The percentage of calories from fat are %.3lf%",percentCalories);
	
	
}
