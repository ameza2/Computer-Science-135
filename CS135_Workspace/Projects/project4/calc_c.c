// Abraham Meza - calc_c.c - CS 135 //
// A calculator utilizing switch statements //

#include <stdio.h>
#include <math.h>

int main(void){

	// Bool Declaration / Initalization //
	_Bool toggle = 1; // starting in double mode

	// Int Declaration / Initalization //
	int option, t1, t2, solution;

	// Double Declaration / Initalization // 
	double dt1, dt2, dsolution;

	printf("This program implements a calculator.\n");

	while(1){
		
		// Double Mode //
		while (toggle == 1){
			printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - exp(x)\n6 - log(x)\n7 - toggle calculator type\n8 - exit program\n");
			printf("Please enter your option: ");
			scanf("%d", &option);

			switch(option){
				case 1:
					printf("Enter first term: ");
					scanf("%lf", &dt1);
					printf("Enter second term: ");
					scanf("%lf", &dt2);
					dsolution = dt1 + dt2;
					printf("The sum is: %.15lf\n",dsolution);
					break;

				case 2:
					printf("Enter first term: ");
					scanf("%lf", &dt1);
					printf("Enter second term: ");
					scanf("%lf", &dt2);
					dsolution = dt1 - dt2;
					printf("The difference is: %.15lf\n",dsolution);
					break;

				case 3:
					printf("Enter first term: ");
					scanf("%lf", &dt1);
					printf("Enter second term: ");
					scanf("%lf", &dt2);
					dsolution = dt1 * dt2;
					printf("The product is: %.15lf\n",dsolution);
					break;

				case 4:
					printf("Enter first term: ");
					scanf("%lf", &dt1);
					printf("Enter second term: ");
					scanf("%lf", &dt2);
						if(dt2 == 0){
							printf("Cannot divide by zero!\n");
						}
						else{
							dsolution = dt1 / dt2;
							printf("The quotient is: %.15lf\n",dsolution);
						}
					break;

				case 5:
					printf("Enter term: ");
					scanf("%lf", &dt1);
					printf("The result of exp(%.15lf) is: %.15lf\n",dt1,exp(dt1));
					break;

				case 6:
					printf("Enter term: ");
					scanf("%lf", &dt1);
					if(dt1 > 0){
						printf("The result of log(%.15lf) is: %.15lf\n",dt1,log(dt1));
					}
					else
					{
						printf("Cannot take the log of that number!\n");
					}
					break;

				case 7:
					printf("Calculator now works with integers.\n");
					toggle = 0;
					break;

				case 8:
					return 0;
					break;

				default:
					printf("Invalid Option.\n");
					break;
   		}
		}

		while (toggle == 0){
			printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - exp(x)\n6 - log(x)\n7 - toggle calculator type\n8 - exit program\n");
			printf("Please enter your option: ");
			scanf("%d", &option);

			switch(option){
				case 1:
					printf("Enter first term: ");
					scanf("%d", &t1);
					printf("Enter second term: ");
					scanf("%d", &t2);
					solution = t1 + t2;
					printf("The sum is: %d\n",solution);
					break;

				case 2:
					printf("Enter first term: ");
					scanf("%d", &t1);
					printf("Enter second term: ");
					scanf("%d", &t2);
					solution = t1 - t2;
					printf("The difference is: %d\n",solution);
					break;

				case 3:
					printf("Enter first term: ");
					scanf("%d", &t1);
					printf("Enter second term: ");
					scanf("%d", &t2);
					solution = t1 * t2;
					printf("The product is: %d\n",solution);
					break;

				case 4:
					printf("Enter first term: ");
					scanf("%d", &t1);
					printf("Enter second term: ");
					scanf("%d", &t2);
					if(t2 == 0){
							printf("Cannot divide by zero!\n");
						}
					else{
							solution = t1 / t2;
							printf("The quotient is: %d\n",solution);
						}
					break;

				case 5:
					printf("Cannot calculate with integers.\n");
					break;

				case 6:
					printf("Cannot calculate with integers.\n");
					break;

				case 7:
					printf("Calculator now works with doubles.\n");
					toggle = 1;
					break;

				case 8:
					return 0;
					break;

				default:
					printf("Invalid Option.\n");
					break;
			}
		}
	}
}
