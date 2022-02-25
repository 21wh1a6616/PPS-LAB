//find the given letter is vowel or consonant
#include<stdio.h>
int main()
{
	char c;
	int x,y,z,k,l;
	scanf("%c",&c);
	x= (c == 'a');
        y= (c == 'e');
	z= (c == 'i');
        k= (c == 'a');
	l= (c == 'a');
	if (x || y|| z || k|| l )
	{
		printf("Given alphabet is vowel");
	}else 
	{
		printf("Given alphabet is consonant");
	}
}
