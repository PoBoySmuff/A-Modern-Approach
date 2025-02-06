//Project 7
//Input: A dollar ammount
//Output: Lowest number of bills required to pay the amount, using denominations up to $20

#include <stdio.h>

int main(void)
{
	int total, twenty, ten, five, one; // number of each bill required
	printf("Enter a dollar amount: ");
	scanf("%d", &total);
	
	twenty = total / 20; // number of $20 bills needed
	total = (total - (twenty*20)); //decrease total by number of bills needed times the dollar value of the bills
	
	ten = total / 10;
	total = (total - (ten*10));

	five = total / 5;
	total = total - (five*5);

	one = total;

	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenty, ten, five, one);
	
	return 0;
}
