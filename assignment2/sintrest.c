//find simple intrest
#include<stdio.h>

int main()
{
	int p,t,r,si;
	printf("Enter the value of principle,rate,time");
	scanf("%d%d%d",&p,&r,&t);
	si=(p*t*r)/100;
	printf("simple intrest=%d",si);
}

