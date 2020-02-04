#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int age; 
	char first[100], last[100];

	FILE *fptr;

	fptr = fopen(argv[1], "wb");
	
	printf("This program reads and saves ages and names in a binary file.\n");

	printf("Enter person (age, first last): ");
	scanf("%d, %s %s", &age, first, last);

	while(age != 0){
		fprintf(fptr,"%d, %s %s\n", age, first, last);

		printf("Enter person (age, first last): ");
		scanf("%d, %s %s", &age, first, last);
	}
	
	fclose(fptr);

	return 0;
}
