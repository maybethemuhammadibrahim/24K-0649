
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
		printf("The value of either Fat or Calories are not correct;y entered");
		return 0;
	}
	
	float percentCalories = caloriesFromFat/calories;
	
	printf("The percentage of calories from fat are %.3lf%",percentCalories);
	
	
}
