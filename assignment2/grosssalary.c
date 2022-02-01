//find gross salary


#include<stdio.h>

int main()
{
	int  basic,others;
	printf("values of basic salary");
	scanf("%d",&basic);
	others=basic*0.1;//others=da+hr+pf
	printf("gross salary=%d",basic+others);
}

