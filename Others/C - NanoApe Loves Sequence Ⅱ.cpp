#include<stdio.h>
#include<iostream>
using namespace std;

int a[210000];
int main(){
	int T,n,m,k;
	long long ans;
	cin>>T;
	while(T--){
		scanf("%d %d %d",&n,&m,&k);
		for(int i=1;i<=n;++i)
			scanf("%d",&a[i]);
		int cnt = 0,pos = 1;
		ans = 0;
		for(int i=1;i<=n;i++){
			if(a[i] >= m)
				cnt++;
			if(cnt == k){
				while(a[pos] < m){
					pos++;
					ans += n-i+1;
				}
				ans += n-i+1;
				cnt--;
				pos++;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
} 
