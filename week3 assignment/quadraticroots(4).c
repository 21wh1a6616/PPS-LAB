//find the roots
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float d,root1,root2;
	printf("Enter the coefficients\t");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	root1=-b+sqrt(d)/2*a;
	root2=-b-sqrt(d)/2*a;
	printf("roots are %f%f",root1,root2);
	if (d>0)
	{
		printf("Roots are real and unequal");

	}else if (d==0)
	{
		printf("roots are equal and equal");
	}else 
	{
		printf("roots are imaginary");
	}
}
