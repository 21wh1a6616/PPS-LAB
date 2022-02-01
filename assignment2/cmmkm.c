//convert cm to m and m to km
#include<stdio.h>

int main()
{
	int cm;
	float m,km;
	printf("Enter the value in cm");
	scanf("%d",&cm);
	m=0.01*cm;
	km=0.001*m;
	printf("meters=%f and in kilometers=%f",m,km);
}
