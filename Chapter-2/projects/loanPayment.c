//Project 8
//Calculate the remaining balance on a loan after the first, second, and third payments

#include <stdio.h>

int main(void) 
{
	float loan, interest, payment;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest);

	interest = interest / 100 / 12; //convert percentage to decimal, divide by 12 for monthly payments
	
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	loan = loan - payment + (loan * interest); // decrease loan by payment amount, add interest
	
	printf("Balance remaining after first payment: $%.2f\n", loan);

	loan = loan - payment + (loan * interest);

        printf("Balance remaining after second payment: $%.2f\n", loan);

	loan = loan - payment + (loan * interest);

        printf("Balance remaining after first payment: $%.2f\n", loan);


	return 0;

}

