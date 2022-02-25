//find the smallest among given three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values");
	scanf("%d%d%d",&a,&b,&c);
	if ((a<b) &&(a<c))
	{
		printf("%d is smaller",a);
	}else if ((b<c) && (b<a))
	{
		printf("%d is smaller",b);
	}else
	{
		printf("%d is smaller",c);
	}
}
