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
		for(double j=n+1-i;;)
		{
			sum += 1/i*j;
			j--;
			break;
		}
	}
	sum *= 2;
	sum += n;
	printf("%.2lf\n",sum);
	}
	return 0;
} 
