
//find that given number is even or odd
#include<stdio.h>
int main()
{
	int a,reminder;
	scanf("%d",&a);
	reminder=a%2;
	if(reminder==0)
	{
		printf("Given number is EVEN");
	}else
	{
		printf("GIven number is ODD");
	}
}	
