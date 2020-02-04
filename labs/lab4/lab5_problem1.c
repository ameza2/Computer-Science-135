//lab5_problem1.c - Asks user to write a sentence and prints the number of spaces used in the sentence - Abraham Meza//
#include <stdio.h>

int main(void)
{
	int characters, new_lines, tabs;
	char c='j';

	characters=0;
	new_lines=0;
	tabs=0;

	printf("Enter a sentence (end by'.' or '?' or '!'): ");

	while (c != '.' && c != '?' && c != '!') {
	c=getchar();
		switch (c) {
			case ' ':
				++characters;
				break;
			case '\n':
				++new_lines;
				break;
			case '\t':
				++tabs;
				break;
		}
	}
	printf("Number of space characters: %d \n", characters);
	printf("Number of new line characters: %d \n", new_lines);
	printf("Number of tabs: %d \n", tabs);

	return 0;
}
