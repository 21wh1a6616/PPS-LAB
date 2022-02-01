//calculate amount paid by the consumer
#include<stdio.h>


int main()
{
	int cn,noc,cost,amount;
	printf("Enter the consumer number,number of units and cost of each unit\n");
	scanf("%d%d%d",&cn,&noc,&cost);
	amount=noc*cost;
	printf("%d",amount);
}
