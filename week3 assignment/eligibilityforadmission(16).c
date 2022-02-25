//find the eligibility of student
#include<stdio.h>
int main()
{
	int m,p,c;
	printf("Enter the maths,physics and chemistry marks");
	scanf("%d%d%d",&m,&p,&c);
	if ((m>=60)&&(p>=50)&&(c>=40))
	{
		if ((m+p+c>=200) || (m+p>=150))
		{
			printf("Eligible\n");
		}
	}else
	{
		printf("Not Eligible");
	}
}

