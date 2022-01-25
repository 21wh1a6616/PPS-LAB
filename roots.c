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
}
