//find area and perimeter of the circle


#include<stdio.h>
#define PI 3.14

int main()
{
	int r;
	float area,perimeter;
	printf("enter the value of radius\n");
	scanf("%d",&r);
	area=PI*r*r;
	perimeter=2*PI*r;
	printf("area=%f and perimeter=%f",area,perimeter);
}
