#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
#define clr(s, x) memset(s, x, sizeof(s))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
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

int w[17], h[17], q[17];
ll dp[1<<17][17];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	clr(dp, 0x3f);
	int n, K;
	cin >> n >> K;
	for(int i=0; i<n; ++i)	cin >> w[i] >> h[i] >> q[i];
	dp[0][0] = 0;
	for(int i=0; i<(1<<n); ++i){
		int maxw = 0, maxh = 0;
		for(int j=0; j<n; ++j){
			if((i>>j)&1){
				maxw = max(maxw, w[j]);
				maxh = max(maxh, h[j]);
			}
		}
		// printf("%d %d\n", maxw,maxh);
		dp[i][1] = 0;
		for(int j=0; j<n; ++j){
			if((i>>j)&1){
				dp[i][1] += q[j]*(1LL*maxw*maxh-w[j]*h[j]);
			}
		}
	}
	for(int i=0; i<(1<<n); ++i){
		for(int j=i; j; j=(j-1)&i){
			for(int k=1; k<=K; ++k){
				dp[i][k] = min(dp[i][k], dp[i-j][k-1]+dp[j][1]);
			}
		}
	}
	ll ans = LLINF;
	for(int i=0; i<=K; ++i)	ans = min(ans, dp[(1<<n)-1][i]);
	cout << ans << endl;
	return 0;
}