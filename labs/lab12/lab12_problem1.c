#include <stdio.h>
#include<stdlib.h>

int main()
{
	int i, *array, n; 
	float sum, average;
	
	printf("Enter an integer: ");
		scanf("%d", &n);
		
	for(n; n != 0; n += 0){
		array = (int*) calloc(n, sizeof(int));

		printf("Enter %d numbers: ", n);
		for(i = 0; i < n; i++){
			scanf("%d", array + i);
			sum += *(array + i);
		}

		printf("The average is: %.1f\n", sum/n);
		
		free(array);

		printf("Enter an integer: ");
		scanf("%d", &n);
	}
	
	return 0;
}
