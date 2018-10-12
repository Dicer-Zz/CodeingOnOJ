#include<stdio.h>

int main(){
	long long n;
	while(~scanf("%lld",&n)){
		printf("%lld\n\n",(1+n)*n/2);
	}
	return 0;
}
