// Abraham Meza - sq_root.c - CS 135 //
// This program computes the square root of a number by using a while statement //

#include <stdio.h>
#include <math.h>

int main(void){

	// Declare Variables in the Situation (Double) //

	double number;
	double old_guess, new_guess;
  double guess = 1.00;

	// Input Value Asked of the User //

	printf("Enter your number: ");
	scanf("%lf", &number);

	// While Statement (Loop of Sq_Root Formula) //

  while (fabs(pow(guess,2) - number) >= 1e-5) {
    printf("%10.5lf\n", guess);
		
		old_guess = guess;
    new_guess = (old_guess + (number/old_guess)) / 2.0;
		guess = new_guess;
  }

	// Print Statement of Sq_Root Value after the Loop has been Executed //

	printf("Estimated square root of %.5lf: %.5lf\n", number, new_guess);

	return 0;
}
