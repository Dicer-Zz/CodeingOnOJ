#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	long long a;
	scanf("%lld",&a);
	a%=100000;
	a+=600000;
	printf("%lld\n",a);
	}
	return 0;
 } 
