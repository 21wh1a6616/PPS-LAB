//find that given number is positive or negative or zero
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("a is positive");
	}else if(a<0)
	{
		printf("a is negative");
	}else{
		printf("a is equal to zero");
	}
}
