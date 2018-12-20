#include<stdio.h>
int main()
{
	int T;
	long long n,m;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&n,&m);
		for(long long  i=1;;i++){
			if(n==0){
			printf("1");
			break;
		}
			if(i*m % (n+1) == 0){
			printf("%lld\n",i);
			break;
		}
		}
	}
	return 0;
 } 
