//find that given triangle is isoceles ,equilateral or scalene
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b) && (a==c))
	{
		printf("Triangle is equilateral\n");
	}else if((a==b) || (a==c))
	{
		printf("Triangle is isoceles\n");
	}else
	{
		printf("Triangle is scalene\n");
	}
}
