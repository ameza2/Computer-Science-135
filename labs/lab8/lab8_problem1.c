//A program that utilizes pointer arguments to switch values stored in varibales - lab8_problem1.c - Abraham Meza//

#include <stdio.h>

void rotate_left(int *i, int *j, int *k);

int main()
{
	int i = 1, j = 2, k = 3;
	
	printf("i == %d, j == %d, k == %d \n", i, j , k);
	
	rotate_left(&i, &j, &k);

	printf("i == %d, j == %d, k == %d \n", i, j , k);

	return 0;
}

void rotate_left (int *i, int *j, int *k){
	int tmp;
	
	tmp = *i;
	*i = *j;
	*j = *k;
	*k = tmp;
}
