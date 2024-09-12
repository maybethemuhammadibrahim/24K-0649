/*Write a program in C to calculate and print the Electricity bill of a given
customer. The customer id., name and unit consumed by the user should be
taken from the keyboard and display the total amount to pay to the customer.
The charges are as follow:
Unit Charge/Unit
Up to 199 @16.20
200 and above but less than 300 @20.10
300 and above but less than 500 @27.10
500 and above @35.90
If the bill exceeds Rs. 18000 then a surcharge of 15% will be charged on top of the bill
*/
#include<stdio.h>
int main()
{
int customer_id;
char customer_name;
float bill, unit, surcharge_amount=0, price_unit;
printf("Enter Customer Id: ");
scanf(" %d",&customer_id);
printf("Enter Customer name: ");
scanf(" %c",&customer_name);

printf("Enter Units consumed: ");
scanf(" %f",&unit);


if (unit<199){
  price_unit = 16.20;
  bill = unit * price_unit;
}
else if (unit<300 && unit>=200){
   price_unit = 20.10;
  bill = unit * price_unit;
}
else if (unit<500 && unit>=300){
  price_unit = 27.10;
  bill = unit * price_unit;
}
else if (unit>=500){
  price_unit = 35.90;
  bill = unit * price_unit;
}
else{printf("error");}

if (bill >= 18000){
  surcharge_amount = bill*0.15;
}
float total_bill = bill + surcharge_amount;

printf("Customer Id: %d\n", customer_id);
printf("Units Consumed: %.3f\n", unit);
printf("Amount Charges @%.3f per unit: %.3f\n", price_unit, bill);
printf("Surcharge amount: %.3f\n", surcharge_amount);
printf("Net Amount to be paid by the customer: %.3f", total_bill);
}
