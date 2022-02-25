//tell that given triangle is valid or not
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the angles");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b+c==180)
	{
		printf("Triangle is valid");
	}else
	{
		printf("Triangle is not valid");
	}
}
