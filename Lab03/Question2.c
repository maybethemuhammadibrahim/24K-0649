#include<stdio.h>

int main(){
	int firstno, secondno, tempno;
	printf("Enter the first no: ");
	scanf("%d", &firstno);

	printf("Enter the second no:");
	scanf("%d", &secondno);
	tempno = firstno;
	firstno = secondno;
	secondno = tempno;
	printf("The Swapped Numbers are \nFirst no:%d\n Second no:%d", firstno, secondno);
}