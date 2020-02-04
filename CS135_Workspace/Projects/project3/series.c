// Abraham Meza - series.c - CS 135 //
// This program asks the user to enter an integer and calculates a given mathematical series by utilizing a for loop. //

#include <stdio.h>
#include <math.h>

int main(void){

  // Declare the Variables in the Situation (Int) //

  int number, i, sum_odd, sum_even, value;

  // Establish Initial Values of Integers //

  sum_odd = 0;
  sum_even = 0;

  // Input Value Asked of the User //

  printf("Enter an integer number: ");
  scanf("%d", &number);

  // For Statement (Loop Calculating Values betwewen Odd and Even Values) //

  for(i = 1; i <= number; i++) {
    if(i%2 == 0) {
      sum_odd = sum_odd + pow(i,2);
    } else{
    sum_even = sum_even + pow(i,2);
    }
  }

  value = sum_even-sum_odd;

  // Print Statement of Series Value after the Loop has been Executed //

  printf("The value of series is: %d\n",value);

  return 0;
}
