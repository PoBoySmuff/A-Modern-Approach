//Project 5
//Write a program that asks the user for a value for x, and inserts x into the polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>

int main(void)
{
	int x, answer;
	printf("Enter a value for x: ");
	scanf("%d", &x);
	answer = (3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x*x) + (7 * x) - 6;
	printf("Answer: %d\n", answer);
	return 0;
}

