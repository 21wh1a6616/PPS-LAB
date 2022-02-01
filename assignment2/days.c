//convert given no of days into years, months and days


#include<stdio.h>

int main()
{
	int givendays,years,weeks,days;
	printf("given number of days=");
	scanf("%d",&givendays);
	years=givendays/365;
	weeks=(givendays%365)/7;
	days=givendays-((years*365)+(weeks*7));
	printf("years=%d ,weeks=%d and days=%d",years,weeks,days);
}
