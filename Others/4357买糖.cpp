#include<stdio.h>

int main(){
	long long a,b,p;
	while(scanf("%lld%lld",&a,&b)!=EOF){
		int d;
		d = b-a;
		scanf("%lld",&p);
		printf("%lld\n",a+(p-1)*d);
	}
	return 0;
} 
