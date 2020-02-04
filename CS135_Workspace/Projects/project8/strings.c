// Abraham Meza - strings.c - CS 135 //
// The program asks the user for two strings and initiates four string library functions using pointers //

#include <stdio.h>

int strlength(char *str);
char strcopy(char *destination, char *source);
char strconcat(char *destination, char *source);
int strcomp(char *str1, char *str2);

int main(void){
  char str1[20], str2[20];

  printf("Please enter the first string: ");
  scanf("%s", str1);

  printf("Please enter the second string: ");
  scanf("%s", str2);

  printf("The length of string 1 is: %d\n", strlength(str1));
  printf("The length of string 2 is: %d\n", strlength(str2));

  if(strcomp(str1, str2) == 1){
    printf("String 1 comes before string 2 alphabetically.\n");
  }
  else if(strcomp(str1, str2) == -1){
    printf("String 2 comes before string 1 alphabetically.\n");
  }
  else if(strcomp(str1, str2) == 0){
  printf("The two strings are the same.\n");
  }

  strconcat(str2, str1);

  printf("String 1 after concatenation: %s\n", str1);
  printf("String 2 after concatenation: %s\n", str2);

  strcopy(str2, str1);

  printf("String 1 after copying: %s\n", str1);
  printf("String 2 after copying: %s\n", str2);

  return 0;
}

int strlength(char *str) {
   int i = 0;

   while(str[i] != '\0'){
      i++;
  }
   return i;
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

  while(*source)
  {
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
  	i++;
    }
  }

	if (str1[i] - str2[i] > 0){
    return 1;
  }
  else if(str1[i] - str2[i] < 0){
    return -1;
  }
  else{
    return 0;
  }
}
