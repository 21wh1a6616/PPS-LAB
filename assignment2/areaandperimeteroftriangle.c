//find area and perimeter of triangle
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,perimeter;
	float s,area;
	printf("Sides of triangle are\n ");
	scanf("%d%d%d",&a,&b,&c);
	perimeter=a+b+c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("perimeter=%d and area=%f",perimeter,area);
}
