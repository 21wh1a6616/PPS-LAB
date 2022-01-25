#include<stdio.h>
void main()
{
	int percentage;
	printf("enter percentage");
	scanf("%d",&percentage);
	if(percentage>=90)
	{
		printf("grade=A and percentage=%d",percentage);
	}else if(percentage>=80 && percentage<=90)
	{
		printf("grade=B and percentage=%d",percentage);
	}else if(percentage>=60 && percentage<=80)
	{
		printf("grade=C and percentage=%d",percentage);
	}else if(percentage>=50 && percentage<=60)
	{
		printf("grade=D and percentage=%d",percentage);
	}else
		printf("FAILL and percentage=%d",percentage);
}

