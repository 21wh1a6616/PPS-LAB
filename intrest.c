#include<stdio.h>
#include<math.h>
void main()


{
	float p,r,t,si,ci;
	printf("enter the values of principle,rate,time period\n");
	scanf("%f%f%f",&p,&r,&t);
	si=p*t*r/100;
	printf("simple compound=%f",si);
	ci=p*(pow((1+r/100),t));
	printf("compound intrest=%f",ci);
}
