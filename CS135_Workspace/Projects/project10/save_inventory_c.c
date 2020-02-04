// Abraham Meza - save_inventory_c.c - CS 135 //
// This program will create a file determined by the user (inventory business), and will be filled with information provided by the user (file creation/writing) (OUTPUT) //

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int part, quantity;
  int duplicate[1000] = {0};
  float price;

  FILE *fptr;

  fptr = fopen("inventory.txt", "wb");

  printf("This program stores a business inventory.\n");

  printf("Please enter item data (part number, quantity, price): ");
  scanf("%d, %d, %f", &part, &quantity, &price );

  while(part != 0){
    while(duplicate[part] == 1){
      printf("This item has been entered before.\n");

      printf("Please enter item data (part number, quantity, price): ");
      scanf("%d, %d, %f", &part, &quantity, &price );
    }

    duplicate[part] = 1;

    fwrite(&part, sizeof(part), 1, fptr);
    fwrite(&quantity, sizeof(quantity), 1, fptr);
    fwrite(&price, sizeof(price), 1, fptr);

    printf("Please enter item data (part number, quantity, price): ");
    scanf("%d, %d, %f", &part, &quantity, &price );
  }

  fclose(fptr);
  printf("Thank you. Inventory stored in file inventory.txt.\n");

  return 0;
}
