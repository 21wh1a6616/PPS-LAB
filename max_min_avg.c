//find the max min and avg of number in the array
#include<stdio.h>
int avg(int a[100],int n);
int min(int a[100],int n);
int max(int a[100],int n);
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	avg(a,n);
	min(a,n);
	max(a,n);
}

int avg(int a[100],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("average of the numbers in array is %d\n",sum/n);
}


int min(int a[100],int n)
{
	int i,minm;
	for(i=1;i<n;i++)
	{
		minm=a[0];
		if (a[i]<=minm)
		{
			minm=a[i];
		}
	}
	printf("minimum value in the array is %d\n",minm);
}

int max(int a[100],int n)
{
	int maxm,i;
	for(i=1;i<n;i++)
	{
		maxm=a[0];
		if(maxm<=a[i])
		{
			maxm=a[i];
		}
	}
	printf("maximum value in the array is %d\n",maxm);
}
