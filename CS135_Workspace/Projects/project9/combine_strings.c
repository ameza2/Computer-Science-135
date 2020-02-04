// Abraham Meza - combine_strings.c - CS 135 //
// This program will ask the user to enter two strings and then will perform one off two possible operations (interspersing/concatenating) //

#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 30

int strlength(char *str);
int strcomp(char *str1, char *str2);

char *intersperse(char *str1, char *str2);
char *widen_stars(char *str1, char *str2);

int main(int argc,char* argv[]){
  int i,inter = 0,wide = 0;

  char *str1 = (char *)malloc(MAX_CHAR);
  char *str2 = (char *)malloc(MAX_CHAR);

  printf("Please enter a string of maximum %d characters: ", MAX_CHAR);
  scanf("%s",str1);

  printf("Please enter a string of maximum %d characters: ", MAX_CHAR);
  scanf("%s",str2);

  if(strcomp(argv[1],"-i") == 0){
  char *newString = intersperse(str1,str2);
  printf("The combined string is: %s \n",newString);

  free(newString);
  }

  if(strcomp(argv[1], "-w") == 0){
  char *widen = widen_stars(str1,str2);
  printf("The combined string is: %s \n",widen);

  free(widen);
  }
}

int strlength(char *str){
   int i = 0;

   while(str[i] != '\0'){
      i++;
  }
   return i;
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

char *intersperse(char *str1,char *str2){

  int slength1 = strlength(str1);
  int slength2 = strlength(str2);
  int newStringLength = slength1 + slength2;

  char *newString = (char*)malloc(newStringLength);

  int i = 0, j = 0,k = 0;

  while(str1[i] != '\0' || str1[j] != '\0'){
    newString[k++] = str1[i];
    newString[k++] = str2[j];
    i++;
    j++;
  }

  if(str1[i] == '\0'){
    while(str2[j] != '\0'){
      newString[k++] = str2[j];
      j++;
    }
  }

  if(str2[j] == '\0'){
    while(str1[i] != '\0'){
      newString[k++] = str1[i];
      i++;
    }
  }

  newString[k] = '\0';

  return newString;
}

char *widen_stars(char *str1,char *str2){
  int slength1 = strlength(str1);
  int slength2 = strlength(str2);
  int newStringLength = slength1 + slength2;


  newStringLength = (2 * newStringLength) - 1;

  char *widen = (char*)malloc(newStringLength);

  int i = 0, j = 0,k = 0;

  while(str1[i] != '\0'){
    widen[k++] = str1[i++];
    widen[k++] = '*';
  }

  while(str2[j] != '\0'){
    widen[k++] = str2[j++];
    widen[k++] = '*';
  }

  widen[--k] = '\0';

  return widen;
}
