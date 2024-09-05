#include<stdio.h>

int main()
{
	float x1, y1, x2, y2;
	x1 = 5;
	x2 = 3;
	y1 = 4;
	y2 = 2;
	float slope = (y2 - y1)/(x2 - x1);
	printf("Slope= %.2lf", slope);
}