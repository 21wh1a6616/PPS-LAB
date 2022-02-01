//add 2 numbers using subtraction operator
#include<stdio.h>

int main()
{
	int a,b,sum;
	printf("Enter values of a and b");
	scanf("%d%d",&a,&b);
	sum=a-(-b);
	printf("sum=%d",sum);
}

