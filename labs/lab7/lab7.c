//lab7_problem1.c - A program that utilizes function to find the kth variable of an integer. - Abraham Meza//

#include <stdio.h>

int digit (int n, int k);


int main(void)
{
	int n, k, d, i;

	printf("Enter two positive integers (n, k): ");
	scanf("%d, %d", &n, &k);

	while (n < 0 || k < 0){
		printf("Enter two positive integers (n, k): ");
		scanf("%d, %d", &n, &k);
	}
	
	d = digit(n, k);
	printf("The k=%d digit of %d is: %d \n", k, n, d);

	return 0;
}

int digit (int n, int k){
	int i = 0, val;

	while (i < k) {
		val = n % 10;
		n /=10;
		i++;
	}
	
	if (k > n){
		val = -1;
		return val;
	} else {
		return val;
	}
}
