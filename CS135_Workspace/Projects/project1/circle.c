// circle.c - Abraham Meza - CS 135 //
// This program will ask the user for the radius of a circle that has been inscribed in a square. //
// The radius value will prompt the program to find the specified measurements of the inscribed circle and the square. //

#include <stdio.h>

#define pi 3.14f

int main(void){

  // Declare the Variables being Utilized in the Program (radius,diameter,sides,etc) //

  int radius, diameter, sides, perimeter_square, area_square;
  float circumference, area_circle, difference_in_area;

  // Input Display of the Program//

  printf("This program computes values related to an inscribed circle.\n");

  printf("Enter the value of the radius: ");
  scanf("%d", &radius);

  // Declare Forumlas of Designated Measurements //

    // Circle //
    diameter = radius * 2;
    circumference = 2 * pi * radius;
    area_circle = pi * (radius * radius);

    // Square //
    sides = radius * 2;
    perimeter_square = radius * 8;
    area_square = sides * sides;

    // Both //
    difference_in_area = area_square - area_circle;

  // Output Display of the Program //

  printf("The diameter of the circle is: %d\n", diameter);
  printf("The circumference of the circle is: %0.3f\n", circumference);
  printf("The area of the circle is: %0.3f\n", area_circle);

  printf("The perimeter of the square is: %d\n", perimeter_square);
  printf("The area of the square is: %d\n", area_square);
  printf("The difference between the area of the square and the circle is: %0.3f\n", difference_in_area);

  return 0;
}
