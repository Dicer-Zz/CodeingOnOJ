#include<stdio.h>
double s[100000+5],b[100000+5];
int main()
{
	double n,m;
	double sum1=0,sum2=0;
	scanf("%lf%lf",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&s[i]);
		b[i] = s[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if((s[i]+s[i+1])>m)
		{
			sum1 += s[i]+s[i+1]-m;
			s[i+1] = m - s[i];
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if((b[i]+b[i-1])>m)
		 {
		 	sum2 += b[i]+b[i-1]-m;
		 	b[i-1]=m-b[i];
		 }
	}
	if(sum1<=sum2)
	printf("%.0lf\n",sum1);
	else
	printf("%.0lf\n",sum2); 
	return 0;
}
