#include <bits/stdc++.h>
using namespace std;
const int maxn = (int)2e5+5;
const int INF = 0x3f3f3f3f;
int a[maxn],dp[maxn];
int main(int argc, char const *argv[])
{
	int T,n,l;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=0;i<n;++i)	scanf("%d",&a[i]);
		memset(dp,INF,sizeof dp);
		for(int i=0;i<n;++i){
			*upper_bound(dp,dp+n,a[i]) = a[i];
		}
		l = lower_bound(dp,dp+n,INF) - dp;
		if(l >= n-1){
			puts("YES");
			continue;
		}
		reverse(a,a+n);
		memset(dp,INF,sizeof dp);
		for(int i=0;i<n;++i){
			*upper_bound(dp,dp+n,a[i]) = a[i];
		}
		l = lower_bound(dp,dp+n,INF) - dp;
		if(l >= n-1)	puts("YES");
		else puts("NO");
	}
	return 0;
}