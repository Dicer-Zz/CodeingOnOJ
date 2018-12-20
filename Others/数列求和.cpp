#include<stdio.h>
int main()
{
	int n;
	double sum;
	sum = 0;
	scanf("%d",&n);
	n += 1;
	while(n--)
	{
		if(n % 2 != 0)
		{
		double m;
		m=n;
		sum =sum + (1/m);
		}
		else if( n != 0)
		{
		double m;
		m=n;
		sum =sum - (1/m);
		} 
	 } 
	 printf("%.3lf",sum);
	return 0 ;
 } 
