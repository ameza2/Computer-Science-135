// lab3_problem2.c - Program asks the user to enter a total budget for purchases, then asks #items and price till budget is 0 - Abraham Meza //

#include <stdio.h>

int main(void)
{
	int items, price, total, budget;

	printf("Please enter your budget: ");
	scanf("%d", &budget);



	while (budget>0) {
		printf("Please enter the items and price: ");
		scanf("%d,%d", &items, &price);

		total = items * price;	

		budget = budget - total;
	}
	
	budget = budget + total;
		
	printf("You cannot buy the last items. \n");

	printf("Your remaining budget is %d. \n", budget);

	return 0;
}

	

