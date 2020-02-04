#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int age; 
	char first[100], last[100];

	FILE *fptr;

	fptr = fopen(argv[1], "rb");
	
	printf("This program prints ages and names from a text file.\n");

	while(!feof(fptr)){
		fscanf(fptr,"%d, %s %s", &age, first, last);
		
		if(!feof(fptr)){
		printf("Name: %d, %s %s\n", age, first, last);
		}
	}
	
	fclose(fptr);

	return 0;
}
