//calculating one angle if other 2 are given
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter the values of two angles");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("c=%d",c);
}

