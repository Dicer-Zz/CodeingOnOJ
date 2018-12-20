#include<stdio.h>
int main()
{
	int  n,m,cas=0;
	double sum;
	while(scanf("%d%d",&n,&m),n,m)
	{
		cas++;
		sum=0;
		for(long long  i=n;i<=m;i++)
		{
			sum += 1.0/(i*i);
		}	
		printf("case %d:%.5f\n",cas,sum);
	}
	return 0;
}
