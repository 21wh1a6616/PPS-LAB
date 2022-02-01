//read 5 subject marks and find average
#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5;
	float avg;
	printf("enter the marks\n");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	avg=(num1+num2+num3+num4+num5)/5;
	printf("average=%f",avg);
}


