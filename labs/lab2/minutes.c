//minutes.c - Abraham Meza//

#include <stdio.h>

int main(void)
{
	int minutes,weeks,days,hours,total_min;

	printf("Enter a number of minutes: ");
	scanf("%d",&total_min);

	weeks=total_min/(60*24*7);
	total_min=total_min%(60*24*7);

	days=total_min/(60*24);
	total_min=total_min%(60*24);

	hours=total_min/(60);
	total_min=total_min%(60);

	minutes=total_min/1;
	total_min=total_min%1;

	printf("This represents: %d weeks, %d days, %d hours, an %d minutes\n",weeks,days,hours,minutes);

	return 0;
}

