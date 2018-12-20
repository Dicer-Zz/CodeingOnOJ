#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
int a[110000],dp[110000];
int main(int argc, char const *argv[])
{
	int cnt = 1;
	while(scanf("%d",&a[cnt]) != EOF)	cnt++;
	memset(dp,inf,sizeof dp);
	int l,r,mid,ans = 0;
	for(int i = 1;i<cnt;++i){
		l = 1;r = cnt;
		while(l<=r){
			mid = (l+r)/2;
			if(l == r){
				if(dp[mid] == a[i])	ans++;
				else	dp[mid] = a[i];
			}
			if(dp[mid] > a[i])	l = mid;
			else 	r = mid;
		}
	}
	ans += lower_bound(dp+1,dp+cnt,inf) - dp - 1;
	printf("%d\n",ans);
	return 0;
}