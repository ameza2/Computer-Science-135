//lab3_problem1.c - Program that asks the suer to input 4 integer numbers and evaluates with specified conditions - Abraham Meza//

#include <stdio.h>

int main(void)
{
	int w, x, y, z;

	printf("Enter 4 integers (w, x, y, z): ");
	scanf("%d%d%d%d\n", &w, &x, &y, &z);

	if ((w + x) <= (y + z)) {
		printf("Conditon 1 is true.\n");
	} 
	else {
		printf("Condition 1 is false.\n");
	}

	if (w%2==0 && x%2==0 && z%2==0 && y%2==0) {
		printf("Condition 2 is true.\n");
	}
	else {
		printf("Condition 2 is false. \n");
	}
	
	return 0;
}


