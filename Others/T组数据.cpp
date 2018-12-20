#include<stdio.h>
int main ()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long a; 
		scanf("%lld",&a);;
		printf("%lld\n",(1+a)*a/2); 
	}
	return 0;
 } 
