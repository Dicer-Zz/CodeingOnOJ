#include<stdio.h>
int main()
{
	int T;
	long long n,m;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&n,&m);
		for(int i=1;;i++){
			if(m*i %(n+1)==0){ 
			printf("%lld\n",i);
			break;
			} 
		}
	} 
	return 0;
}
