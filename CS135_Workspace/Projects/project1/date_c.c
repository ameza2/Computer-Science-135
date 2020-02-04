// date_c.c - Abraham Meza - CSS 135 //
// This program will ask an input of four dates in the format dd/mm/yyyy and prints them out in a tabular format. //

#include <stdio.h>

int main(void){

  // Declare the Variables being Utilized in the Program (day,month,year) //

  int day1,month1,year1;
  int day2,month2,year2;
  int day3,month3,year3;
  int day4,month4,year4;

  // Enter the Desired Dates into the Program //

  printf("Enter date 1 (dd/mm/year):  ");
  scanf("%d /%d /%d", &day1, &month1, &year1);

  printf("Enter date 2 (dd/mm/year):  ");
  scanf("%d /%d /%d", &day2, &month2, &year2);

  printf("Enter date 3 (dd/mm/year):  ");
  scanf("%d /%d /%d", &day3, &month3, &year3);

  printf("Enter date 4 (dd/mm/year):  ");
  scanf("%d /%d /%d", &day4, &month4, &year4);

  // Display the Date in Tabular Format //
  printf("\n");
  printf("Year\tMonth\tDay\t \n");

  printf("%04d\t%02d\t%02d\t\n", year1, month1, day1);
  printf("%04d\t%02d\t%02d\t\n", year2, month2, day2);
  printf("%04d\t%02d\t%02d\t\n", year3, month3, day3);
  printf("%04d\t%02d\t%02d\t\n", year4, month4, day4);

  return 0;
}
