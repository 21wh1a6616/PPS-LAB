//find the given year is leap year or not
#include<stdio.h>
int main()
{
	int y,reminder;
	scanf("%d",&y);
	reminder= y%4;
		if(reminder==0)
		{
			printf("%d is a leap year",y);
		}else
		{
			printf("%d is not a leap year",y);
		}
}
