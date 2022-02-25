//find the given character is alphabet,digit or special character
#include<stdio.h>
int main()
{
	char lt;
	int ASCII_Value;
	printf("Enter the letter");
	scanf("%c",&lt);
	if ((lt>=65) && (lt<=122)) 

	{
		printf("Given letter is alphabet");
	}else if ((lt>=48) && (lt<=57))
	{
         	printf("Given Letter is digit");
	}else

	{
		printf("Given letter is special character");
	}
	
}
	

