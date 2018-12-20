#include<stdio.h>
double a[1002];
int main()
{
	int n;
	double sum;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
		scanf("%lf",&a[i]);
		sum += a[i]; }
		sum /= n;
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>sum)cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;	
}
