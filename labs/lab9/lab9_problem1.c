//This program that swaps integers via pointers - lab9_problem1.c - Abraham Meza//

#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int array[15];
	int i;

	printf("Enter 15 integers:\n");
	for(i = 0; i < 15; i++){
		scanf("%d", &array[i]);
	}

	printf("\n");

	swap(&array[0], &array[7]);
	swap(&array[8], &array[3]);
	swap(&array[14], &array[0]);


	printf("Swapped array:\n");

	for(i = 0; i < 15; i++){
		printf("%d ",array[i]);
	}

	printf("\n");

	return 0;
}
	
	
void swap(int *a, int *b){
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}
