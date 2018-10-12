#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#define LL long long
using namespace std;

int main(){
	LL n,p;
	while(scanf("%lld%lld",&n,&p)==2){
		int ans=1;
		if(n<p){
			for(;n>1;n--){
			ans = ans*n%p; 
			ans %= p;
		    }
			printf("%lld\n",ans%p);
		}
		else 
		printf("0\n");
	}
	return 0;
} 
