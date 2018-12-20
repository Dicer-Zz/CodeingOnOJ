#include<stdio.h>
int main()
{
	int T,E;
	long long r;
	scanf("%d",&T);
	while(T--){
		E = 1;
		scanf("%lld",&r);
		E = 2*r;
		printf("%d\n",E);
	}
	return 0;
}
