//find that given number is divisible by 5 and 11
#include<stdio.h>
int main()
{
	int a,reminder_for_5,reminder_for_11;
	printf("Enter the value");
	scanf("%d",&a);
	reminder_for_5=(a%5);
	reminder_for_11=(a%11);
	if ((reminder_for_5 == 0) && (reminder_for_11==0))
	{
		printf("Divisible by both 5 and 11");
	}else
	{
		printf("not divisible");
	}
}

