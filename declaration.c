#include<stdio.h>
   int a=4;
int main()
	//if a global declaration is give it will be used for complete code
	//global declaration should be given before main function
	
	
        
{
        printf("value of a is %d\n",a);
        fun();
}

int fun()
{
	//local declaration is given within the function and it is applied only 
	//upto that function
	//when a function have both the declarations it prefers local declaratio
	//ns
	int a=5;
	printf("value of a is %d\n",a);
}
