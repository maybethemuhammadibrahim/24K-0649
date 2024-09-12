/*An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it&#39;s more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.*/

#include<stdio.h>

int main(){
	float cost=10000;
	float discount, result;
	
	if (cost>=500 && cost<= 2000){
		discount = (cost*5)/100;
	}
	else if (cost>2000 && cost<=4000){
		discount = (cost*10)/100;
	}
	else if (cost>4000 && cost<=6000){
		discount = (cost*20)/100;
	}
	else if (cost>6000){
		discount = (cost*35)/100;
   }
   else{discount = 1;}
   
    result = cost - discount;
	printf("Your bill(%f) after discount is: %f\n", cost, result);
	printf("You saved:%f ", discount);

	
}