//A program that utilizes arrays to organize even and odd integers - lab5_problem1.c - Abraham Meza//

#include <stdio.h>

int main(void)
{
	int array [10];
	int i;
	
	printf("Enter ten values.\n");

	for(i=0;i<10;i++)
	{
		printf("Value %d: ",i+1);
		scanf("%d",&array[i]);
	}

	printf("The even indexed values are: ");
	for(i=0;i<10;i=i+2)
	{
		printf("%d, ",array[i]);
	}
	printf("\n");

	printf("The odd indexed values are: ");
	for(i=1;i<10;i=i+2)
	{
		printf("%d, ",array[i]);
	}
	printf("\n");

	return 0;
}
