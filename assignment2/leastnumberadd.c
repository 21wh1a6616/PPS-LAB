//find least number that should be added to x so it is divisible by y


#include<stdio.h>

int main()
{
	int x,y;
	printf("enter the values of x and y");
	scanf("%d%d",&x,&y);
	printf("number that should be added=%d",x%y);
}

