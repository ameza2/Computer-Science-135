// Abraham Meza - calc.c - CS 135 //
// A calculator utilizing switch statements //

#include <stdio.h>

int main(void) {

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
			printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - toggle calculator type\n6 - exit program\n");
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
						if(dt2 == 0)
						{
							printf("Cannot divide by zero!\n");
						}
						else
						{
							dsolution = dt1 / dt2;
							printf("The quotient is: %.15lf\n",dsolution);
						}
					break;

				case 5:
					printf("Calculator now works with integers.\n");
					toggle = 0;
					break;

				case 6:
					return 0;
					break;

				default:
					printf("Invalid Option.\n");
				break;
			}
		}

		// Integer Mode //
		while (toggle == 0){
			printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - toggle calculator type\n6 - exit program\n");
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
					if (t2 == 0)
					{
						printf("Cannot divide by zero!\n");
					}
					else
					{
						solution = t1 / t2;
						printf("The quotient is: %d\n",solution);
					}
				break;

	      case 5:
	      printf("Calculator now works with doubles.\n");
	      toggle = 1;
	      break;

				case 6:
				return 0;
				break;

				default:
				printf("Invalid Option.\n");
				break;
	    }
		}
	}
}
