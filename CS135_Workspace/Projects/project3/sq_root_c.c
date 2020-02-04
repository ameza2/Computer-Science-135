// Abraham Meza - sq_root_c.c - CS 135 //
// This program computes the square root of a number by using a while statement //

#include <stdio.h>
#include <math.h>

int main(void){

	// Declare Variables in the Situation (Float) //

	float number;
	float old_guess, new_guess;
  float guess = 1;

	// Declare Additonal Variables (Count/Trials) //

	int trials = 0;

	// Input Value Asked of the User //

	printf("Enter your number: ");
	scanf("%f", &number);

	// While Statement (Loop of Sq_Root Formula) //

  while (fabs(pow(guess,2) - number) >= 1e-5) {
    printf("%d\t%10.5f\n", trials, guess);

		old_guess = guess;
    new_guess = (old_guess + (number/old_guess)) / 2.0;
		guess = new_guess;

		trials++; // increment every successful trial
  }

	// Print Statement of Sq_Root Value after the Loop has been Executed //

	printf("Estimated square root of %.5f: %.5f\n", number, new_guess);

	return 0;
}
