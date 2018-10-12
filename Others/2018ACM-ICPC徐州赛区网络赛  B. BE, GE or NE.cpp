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

int dp[1024][233];
int a[1024], b[1024], c[1024];
int n, m, k, l;
int dfs(int x, int s){
	if(x == n+1)	return s;
	if(dp[x][s+100] != -1)	return dp[x][s+100];
	int ans;
	if(x&1)	{
		ans = -INF;
		if(a[x])	ans = max(ans, dfs(x+1, min(100, s+a[x])));
		if(b[x])	ans = max(ans, dfs(x+1, max(-100, s-b[x])));
		if(c[x])	ans = max(ans, dfs(x+1, -s));
	}
	else {
		ans = INF;
		if(a[x])	ans = min(ans, dfs(x+1, min(100, s+a[x])));
		if(b[x])	ans = min(ans, dfs(x+1, max(-100, s-b[x])));
		if(c[x])	ans = min(ans, dfs(x+1, -s));
	}
	dp[x][s+100] = ans;
	return dp[x][s+100];
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	clr(dp, -1);
	cin >> n >> m >> k >> l;
	for(int i=1; i<=n; ++i)	cin >> a[i] >> b[i] >> c[i];
	int ans = dfs(1, m);
	if(ans >= k)	puts("Good Ending");
	else if(ans <= l)	puts("Bad Ending");
	else	puts("Normal Ending");
	return 0;
}