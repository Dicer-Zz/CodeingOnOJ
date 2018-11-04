/*
* @Author: Dicer
* @Date:   2018-10-16 21:32:17
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-16 21:32:31
*/
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
#define clr(s, x) memset(s, x, sizeof(s))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
#define debug(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<"\n"
inline int read(){int r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll readll(){ll r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll qpow(ll a,ll b,ll mod){ll res=1;while(b){if(b&1)res = (res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll gcd(ll a,ll b){while(b^=a^=b^=a%=b);return a;}
const double eps = 1e-8;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1e5;
const int MAXM = 1e5;

int dp[23][23333];
int sum[23][23333];
int mp[23][23];
int sta[23333];
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	int	n;
	while(cin >> n){
		int cnt = 0;
		for(int i=0;i<(1<<n);++i){
			if(!(i&(i<<1))){
				sta[cnt++] = i;
				// debug(i);
			}
		}
		// cout << cnt << endl;
		for(int i=1;i<=n;++i){
			for(int j=0;j<n;++j){
				cin >> mp[i][j];
			}
		}
		clr(dp, 0);	clr(sum, 0);
		for(int i=1;i<=n;++i){
			for(int j=0;j<cnt;++j){
				for(int k=0;k<n;++k){
					if((sta[j]>>k)&1){
						sum[i][j] += mp[i][k];
					}
				}
				// debug(sum[i][j]);
			}
		}
		for(int i=1;i<=n;++i){
			for(int j=0;j<cnt;++j){
				for(int k=0;k<cnt;++k){
					if(sta[j]&sta[k])	continue;
					dp[i][j] = max(dp[i][j],dp[i-1][k]+sum[i][j]);
				}
			}
		}
		int ans = 0;
		for(int i=0;i<cnt;++i)	ans = max(ans, dp[n][i]);
		cout << ans << endl;
	}
	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %.2lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}