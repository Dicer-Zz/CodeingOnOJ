#include<stdio.h>
int main()
{
	int n;
	double sum;
	while(scanf("%d",&n),n)
	{
	sum=0;
	for(double i=2;i<n+1;i++)
	{
		for(double j=n-1;j>=1;j--)
		{
			sum += 1/i*j;
		}
	}
	sum += n;
	printf("%d\n",sum);
	}
	return 0;
}
