//find the electricity charges for the current they used
#include<stdio.h>
int main()
{
	int a;
	float x,y,z;
	scanf("%d",&a);
	if (a<=200)
	{
		x=a*80;
		if (x>400)
		{
			printf("%f",x+(x*0.15));
		}else
		{
		printf("%f",x+100);
		}


	}else if ((a<=300) && (a>200))
	{
		y = (a-200)*90;
		z= 200*80;
		if (((y+z)+100)>400)				
		{
			printf("%f",(y+z) +((y+z)+100)*0.15);
		}else
		{
	               	printf("%f",(y+z)+100);
		}
	}else 
	{
		printf("%f",(a*1) +(((a*1)+100)*0.15));
	}
}

