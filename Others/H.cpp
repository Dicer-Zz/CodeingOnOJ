#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool nisprime[10000005];
long long prime[670000];

int main(void){
	int count = 0;
	memset(nisprime,0,sizeof(nisprime));
	for(int i=2;i<10000005;++i){
		if(!nisprime[i])
			prime[count++] = i;
		for(int j=0;j < count && prime[j]*i <= 10000005 ;j ++){
			nisprime[prime[j]*i] = 1;
			if(i%prime[j]==0)
				break;
		}
	}
	int t,cnt,ans;
	cin>>t;
	long long m;
	for(int kas = 1;kas<=t;kas++){
		ans = 1;
		cin>>m;
		while(m%2==0)	m /= 2;
		for(int i=0;prime[i]*prime[i]<=m && i<count;++i){
			cnt = 0;
			while(m%prime[i]==0){
				cnt++;
				m /= prime[i];
			}
			ans *= cnt+1;
		}
		if(m != 1)	ans *= 2;
		printf("Case %d: %d\n",kas,ans-1);
	} 
	return 0;
}

/*
5
10
15
12
36
828495
*/
