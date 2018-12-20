#include<stdio.h>
int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
	int t,n,m;
	long long sum;
	int i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		n=n+1;
		if(n<=m&&m%n==0) sum=1;
		else if(n>m&&n%m==0) sum=n/m;
		else if(gcd(n,m)==1) sum=n;
		else if(gcd(n,m)!=1)
		{
			int x=gcd(n,m);
			if((x*m)%n==0) sum=x;
			else
			{
				for(i=x;;i++)
				{
					if((i*m)%n==0)
					{
						sum=i;break;
					}
				}
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}
