//find ASCII value of character and also find quotient and reminder 
#include<stdio.h>

int main()
{
	char ch;
	printf("character is");
	scanf("%c",&ch);
	printf("ASCII value of %c=%d\n",ch,ch);
	fun();
}

int fun()
{
	int a,b;
	float quotient,reminder;
	printf("a and b are");
	scanf("%d%d",&a,&b);
	quotient=a/b;
	reminder=a%b;
	printf("quotient=%f  and reminder=%f",quotient,reminder);
}


