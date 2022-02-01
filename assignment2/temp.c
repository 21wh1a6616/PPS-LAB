//convert given celsius to fahrenheit and viceversa

#include<stdio.h>

int main()
{
	int c;
	float fh;
	printf("enter the value in celsius");
	scanf("%d",&c);
	fh=(c*1.8)+32;
	printf("In fahrenheit=%f\n",fh);
	fun();
}

int fun()
{
	int fh;
	float c;

	 printf("enter the value in fahrenheit");
        scanf("%d",&fh);
        c=(fh-32)/1.8;
        printf("In celsius=%f\n",c);
}
