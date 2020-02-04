// Abraham Meza - arrays.c - CS 135 //
// This program counts how many times digits 0 through 9 appears in a user generated array //

#include <stdio.h>

int main(void){
  int row, col, cont, a, b, i;
  int counts[10] = {0};

  printf("This program counts occurrences of digits 0 through 9 in an NxM array.\n");
  printf("Enter the size of your array (Row Column): ");
  scanf("%d %d", &row, &col);

  int array[row][col];

  for (a = 0; a < row; a++){
    printf("Enter row %d: ", a);
    for (b = 0; b < col; b++){
      scanf("%d",&cont);
      array[a][b] = cont;
      counts[cont]++;
    }
  }

  printf("Total counts for each digit: \n");

  for (i = 0; i < 10 ; i++){
    if (counts[i] != 0 && counts[i] > 0){
      printf("Digit %d occurs %d times\n",i,counts[i]);
    }
  }

  printf("The digit counts directly from the 1D array:\n");

  for (i = 0; i < 10; i++){
    printf("%d ",counts[i]);
  }
  printf("\n");

  printf("The original 2D array entered by the user:\n");

  for (a = 0; a < row; a++){
    for (b = 0; b < col; b++){
      printf("%d ",array[a][b]);
    }
    printf("\n");
  }

  return 0;
}
