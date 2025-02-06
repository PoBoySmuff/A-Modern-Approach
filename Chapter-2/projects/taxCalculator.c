//Project 4
//Asks user for a dollar and cents amount, and computes the new total with a 5% tax added

#include <stdio.h>

#define TAX_RATE 1.05

int main(void)
{
	float bill, newBill;
	
	printf("Enter bill amount: ");
	scanf("%f", &bill);
	
	newBill = bill * TAX_RATE;
	printf("With tax added: %.2f", newBill);

	return 0;
}
