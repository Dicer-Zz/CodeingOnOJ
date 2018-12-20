#include<stdio.h>
int main()
{
	int t;
	long long  m,n;
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&m,&n);
		printf("%lld\n",m*n/2);
	}
	return 0;
 } 
