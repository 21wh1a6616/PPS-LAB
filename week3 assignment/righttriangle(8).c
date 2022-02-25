//find the given sides are belong to rightangle triangle
#include<stdio.h>
int main()
{
	int a,b,c,x,y,z;
	printf("sides are of triangle");
	scanf("%d%d%d",&a,&b,&c);
	x=a*a;
	y=b*b;
	z=c*c;
	if ((x==y+z) || (y==x+z) || (z==x+y))
	{
		printf("given sides belongs to right angle triangle");
	}else
	{
		printf("Given sides do not belong to rightangle trangle");
	}
}
