//find the least number that has to be subtracted from x so it is divisible by y


#include<stdio.h>

int main()
{
	int x,y;
	printf("x and y are\n");
	scanf("%d%d",&x,&y);
	printf("number that has to subtracted is=%d",x%y);
}
