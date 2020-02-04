//A program that computes area and volume of a rectangular prism - lab6_problem1.c - Abraham Meza//
#include <stdio.h>

int compute_area(int l, int w, int h);

int compute_volume(int l, int w, int h);

int main(void)
{
	int l, w, h;
	
	printf("Enter the dimensions of the square prism (l, w, h): ");
	scanf("%d, %d, %d", &l, &w, &h);

	while(l < 0 || w < 0 || h < 0) {
		printf("Enter the dimensions of the square prism (l, w, h): ");
		scanf("%d, %d, %d", &l, &w, &h);
	}
	
	int area;
	area = compute_area(l, w, h);
	printf("The area of the prism is: %d\n", area);

	int volume; 
	volume = compute_volume(l, w, h);
	printf("The volume of the prism is: %d\n", volume);

	return 0;
}

int compute_area(int l, int w, int h)
{
	return 2*((w*l)+(h*l)+(h*w));
}

int compute_volume(int l, int w, int h)
{
	return w * h * l;
}
