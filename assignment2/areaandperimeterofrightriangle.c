//finding area and perimeter of right angle triangle
#include<stdio.h>
#include<math.h>
int main()
{
	int b,h,area,perimeter;
	printf("enter the values of height and base");
	scanf("%d%d",&h,&b);
	area=0.5*b*h;
	perimeter=b+h+sqrt(b*b+h*h);
	printf("area=%d and perimeter=%d",area,perimeter);
}

