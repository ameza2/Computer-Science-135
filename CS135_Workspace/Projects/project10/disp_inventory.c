// Abraham Meza - disp_inventory.c - CS 135 //
// This program will read in a predetermined file and display its content on the screen (INPUT) // 

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int part, quantity, i = 0;
  float price;

  FILE *fptr;

  fptr = fopen("inventory.txt", "rb");

  printf("Below are the items in your inventory.\n");
  printf("Part#\tQuantity\tItem Price");

  while(!feof(fptr)){
    fread(&part, sizeof(int), 1, fptr);
    fread(&quantity, sizeof(int), 1, fptr);
    fread(&price, sizeof(float), 1, fptr);

    if(!feof(fptr)){
      printf("\n%5d\t%8d\t$%9.2f", part, quantity, price);
    }
  }

  printf("\n");
  fclose(fptr);

  return 0;
}
