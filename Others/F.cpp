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
	int T,cnt,ans;
	long long m;
	cin>>T;
	for(int kas = 1;kas<=T;kas++){
		ans = 1;
		cin>>m;
		for(int i=0;prime[i]*prime[i]<=m && i<count;i++){
			cnt = 0;
			while(m%prime[i]==0){
				cnt++;
				m /= prime[i];
			}
			ans *= (2*cnt+1);
		}
		if(m != 1)	ans *= 3;
		printf("Case %d: %d\n",kas,(ans+1)/2);
	}
	return 0;
}
/*


15
2
3
4
6
8
10
12
15
18
20
21
24
25
27
29

*/

