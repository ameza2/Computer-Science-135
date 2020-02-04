// Abraham Meza - dynamic_strings.c - CS 135 //
// This program will create an interactive program for strings that will execute a certain operation based on the user's preference (string library tools); command line arguments // 

#include <stdio.h>
#include <stdlib.h>

int strlength(char *str);
char strcopy(char *destination, char *source);
char strconcat(char *destination, char *source);
int strcomp(char *str1, char *str2);

int main(int argc, char *argv[]){
  int length, option, i, j;
  char * strings[atoi(argv[1])];

  for(i = 0; i < atoi(argv[1]); i++){
    printf("Enter the length of string %d: ", i + 1);
    scanf("%d", &length);

    strings[i] = (char*)malloc(length+1 * sizeof(char));

    printf("Please enter string %d: ", i + 1);
    scanf("%s", strings[i]);
  }

  while (1){
    printf("Your strings are:\n");

    for(i = 0; i < atoi(argv[1]); i++){
      printf("String number %d - \"%s\"\n", i + 1, strings[i]);
    }

    printf("Options:\n1 - Find string length\n2 - Compare strings\n3 - Copy strings\n4 - Concatenate strings\n5 - Quit\n");

    printf("Please enter your option: ");
    scanf("%d", &option);

    switch (option){
      case 1:
        printf("Enter a string number: ");
        scanf("%d", &i);

        printf("The length of string %d is: %d\n", i, strlength(strings[i])); /// prints 6 when its suppose to print 5
        break;

      case 2:
        printf("Enter the number of the first string: ");
        scanf("%d", &i);

        printf("Enter the number of the second string: ");
        scanf("%d", &j);

        if(strcomp(strings[i-1], strings[j-1]) == 1){
          printf("String %d comes before string %d alphabetically.\n", i, j);
        }
        else if(strcomp(strings[i-1], strings[j-1]) == -1){
          printf("String %d comes before string %d alphabetically.\n", j, i);
        }
        else if(strcomp(strings[i-1], strings[j-1]) == 0){
        printf("The two strings are the same.\n");
        }
        break;

      case 3:
        printf("Enter the number of the source string: "); /// Bus error:10
        scanf("%d", &i);

        printf("Enter the number of the destination string: ");
        scanf("%d", &j);

        strcopy(strings[j-1], strings[i-1]);
        break;

      case 4:
        printf("Enter the number of the source string: ");
        scanf("%d", &i);

        printf("Enter the number of the destination string: ");
        scanf("%d", &j);

        strconcat(strings[j-1], strings[i-1]);
        break;

      case 5:
        return 0;
        break;

      default:
        printf("Invalid Option.\n");
        break;
    }
  }
}

int strlength(char *str) {
   int i = 0;

   while(str[i] != '\0'){
      i++;
  }
   return i-1;
}

char strcopy(char *destination, char *source){
  char *beginning = destination;

  while(*source != '\0')
  {
      *destination = *source;
      destination++;
      source++;
  }
  *destination = '\0';
  
  return *beginning;
}

char strconcat(char *destination, char *source){
  char *beginning = destination;

  while(*destination){
     destination++;
   }

  while(*source){
     *destination = *source;
     source++;
     destination++;
  }
  *destination = '\0';
  return *beginning;
}

int strcomp(char *str1, char *str2){
  int i = 0;

  while(str1[i] == str2[i]){
  	if(str1[i] == '\0' && str2[i] == '\0'){
	  	break;
    }
		i++;
	}

  if(str1[i] - str2[i] < 0){
   		return 1;
	}
	else if(str1[i] - str2[i] > 0){
   		return -1;
	}
	else{
   	return 0;
	}
}
