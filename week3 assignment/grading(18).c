//give grading according to the marks student got
#include<stdio.h>
int main()
{
	int a;
	printf("Marks student got");
	scanf("%d",&a);
	if ((a>=85)&&(a<100))
	{
		printf("GRADE A\n");
	}else if ((a<85)&&(a>=65))
	{
		printf("GRADE B\n");
	}else if ((a<65)&&(a>=40))
	{
		printf("GRAD&&E C\n");
	}else if ((a<40)&&(a>=0))
	{
		printf("GRADE D\n");
	}
}
