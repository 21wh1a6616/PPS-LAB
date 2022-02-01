//find divisor using division rule
#include<stdio.h>

int main()
{
	int x,y,z,divisor;
	printf("enter divident,quotient and reminder");
	scanf("%d%d%d",&x,&z,&y);
	divisor=(x-y)/z;
	printf("divisor=%d",divisor);
}

