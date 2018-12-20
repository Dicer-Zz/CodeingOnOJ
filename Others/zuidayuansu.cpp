#include<stdio.h>
double s[1005];
int main()
{
	int n,a;
	double max;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%lf",&s[i]);
	max = s[0];
	for(int i=0;i<n;i++)
	{
		if(s[i]>max)
		{
		max = s[i];
		a=i;
		}
	} 
	
	for(int i=0;i<n;i++)
	{
		if(max == s[i])
		printf("%.3lf %d\n",s[i],i);
	}
	return 0;
 } 
