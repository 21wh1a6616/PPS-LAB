//to print values equations

#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the values of x,y and z\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("value1=%d,value2=%d,value3=%d",(x+y+z)/(x-y-z),(x+y+z)/3,(x+y)*(x-y)*(y-z));
}


