// Abraham Meza - collections_c.c - CS 135 //
// This program calculates the possibilites of purcahses in regards to three book collections. The statements will be calculated based on the input values of the user in regards to the number of volumes in each book collection and the price per each volume. //

#include <stdio.h>

int main(void){
  // Declare the Variables being Utilized in the Program (volume#, price#, etc) //

  int volume1,price1,volume2,price2,volume3,price3,budget,total1,total2,total3;

  // Input Values by the User //

  printf("Enter volumes and price per volume per collection 1: ");
  scanf("%d%d",&volume1,&price1);

  printf("Enter volumes and price per volume per collection 2: ");
  scanf("%d%d",&volume2,&price2);

  printf("Enter volumes and price per volume per collection 3: ");
  scanf("%d%d",&volume3,&price3);

  printf("Enter Bob's budget: ");
  scanf("%d",&budget);

  // Formulas for Calculating the Total Value of Each Book Collection //

  total1 = volume1*price1;
  total2 = volume2*price2;
  total3 = volume3*price3;

  // Money Statement //

  if (budget > 0) {
    printf("(1) Bob has some money to buy collections.\n");
  }
  else {
      printf("(1) Bob does not have money to buy anything\n");
  }

  // Collection Statement //

  if (total1 > budget) {
    if (total2 > budget) {
      printf("(2) At least two collections are more expensive than Bob’s budget.\n");
    }
  }
  else if (total1 <= budget) {
    if (total2 <= budget) {
      printf("(2) At least two collections are cheaper than or equal to Bob’s budget.\n");
    }
  }
  else if (total2 > budget) {
    if (total3 > budget) {
      printf("(2) At least two collections are more expensive than Bob’s budget.\n");
    }
  }
  else if (total2 <= budget) {
    if (total3 <= budget) {
      printf("(2) At least two collections are cheaper than or equal to Bob’s budget.\n");
    }
  }
  else if (total1 > budget) {
    if (total3 > budget) {
      printf("(2) At least two collections are more expensive than Bob’s budget.\n");
    }
  }
  else if (total1 <= budget) {
    if (total3 <= budget) {
      printf("(2) At least two collections are cheaper than or equal to Bob’s budget.\n");
    }
  }

  // Collection Price Comparison - Statements   //

  if (total1 == total2 == total3) {
    printf("(3) All the collections cost the same.\n");
  }
  else if (total1 == total2) {
    printf("(3) Only two collections cost the same amount of money.\n");
  }
  else if (total2 == total3) {
    printf("(3) Only two collections cost the same amount of money.\n");
  }
  else if (total1 == total3) {
    printf("(3) Only two collections cost the same amount of money.\n");
  }
  else if (total1 != total2) {
    printf("(3) No collections have the same price.\n");
  }
  else if (total2 != total3) {
    printf("(3) No collections have the same price.\n");
  }
  else if (total1 != total3) {
    printf("(3) No collections have the same price.\n");
  }

  // Collection Prices of Multiple Book Collections Compared to Budget - Statements //

  if (total1 <= budget) {
    if (total2 <= budget) {
      printf("(4) More than one collection is cheaper than or equal to Bob’s budget or they are all more expensive.\n");
    }
    else {
      printf("(4) Only one collection is cheaper than or equal to Bob’s budget.\n");
    }
  }
  else if (total2 <= budget) {
    if (total3 <= budget) {
      printf("(4) More than one collection is cheaper than or equal to Bob’s budget or they are all more expensive.\n");
    }
    else {
      printf("(4) Only one collection is cheaper than or equal to Bob’s budget.\n");
    }
  }
  else if (total3 <= budget) {
    if (total1 <= budget) {
      printf("(4) More than one collection is cheaper than or equal to Bob’s budget or they are all more expensive.\n");
    }
    else {
      printf("(4) Only one collection is cheaper than or equal to Bob’s budget.\n");
    }
  }

  // How many book collections can Bob buy? - Statements //

  if (total1 + total2 + total3 <= budget) {
    printf("(5) Bob can buy all three collections.\n");
  }
  else if (total1 + total2 <= budget) {
    printf("(5) Bob can only buy two of the collections.\n");
  }
  else if (total2 + total3 <= budget) {
    printf("(5) Bob can only buy two of the collections.\n");
  }
  else if (total1 + total3 <= budget) {
    printf("(5) Bob can only buy two of the collections.\n");
  }
  else if (total1 <= budget) {
    printf("(5) Bob can only buy one collection.\n");
  }
  else if (total2 <= budget) {
    printf("(5) Bob can only buy one collection.\n");
  }
  else if (total3 <= budget) {
    printf("(5) Bob can only buy one collection.\n");
  }
  else if (total1 > budget) {
    printf("(5) Bob cannot buy any collection.\n");
  }
  else if (total2 > budget) {
    printf("(5) Bob cannot buy any collection.\n");
  }
  else if (total3 > budget) {
    printf("(5) Bob cannot buy any collection.\n");
  }

  // Does Bob have enough money to buy any of the three collections? - Statements //

  if (total1 <= budget) {
    if (total2 <= budget) {
      if (total3 <= budget) {
        printf("(6) Bob has enough money to buy any one of the three collections.\n");
      }
      else {
        printf("(6) Bob does not have enough money to buy any one of the three collections.\n");
      }
    }
    else {
      printf("(6) Bob does not have enough money to buy any one of the three collections.\n");
      }
    }
  else {
    printf("(6) Bob does not have enough money to buy any one of the three collections.\n");
    }

  // Can bob buy at least one collection? - Statements //

  if (total1 <= budget) {
    printf("(7) Bob can buy at least one collection.\n");
  }
  else if (total2 <= budget) {
    printf("(7)  Bob can buy at least one collection.\n");
  }
  else if (total2 <= budget) {
    printf("(7)  Bob can buy at least one collection.\n");
  }
  else {
    printf("(7) Bob does not have enough money to buy any collection.\n");
  }

  return 0;
}
