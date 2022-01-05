#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of operands a and b");
	scanf("%d %d",&a,&b);
	printf("Arithmatic operations %d %d %d %d %d\n",a+b,a-b,a*b,a/b,a%b);
	printf("Relational operations %d %d %d %d\n",a<b,a>b,a<=b,a>=b);
	printf("logical operations %d %d %d\n",a&&b,a||b,!(a==b));
	

}
