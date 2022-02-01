//find area and perimeter of rectangle
#include<stdio.h>

int main()
{
	int l,b,area,perimeter;
	printf("length amd breadth of recatangle are ");
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=(l+b)/2;
	printf("area=%d and perimeter=%d",area,perimeter);
}
