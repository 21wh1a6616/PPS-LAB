//calculate compound intrest

#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,t,ci;
	printf("Enter the value of principle,rate,time\n");
	scanf("%d%d%d",&p,&r,&t);
	ci=p*(pow((1+r/100),t));
	printf("compound intrest = %d",ci);
}

