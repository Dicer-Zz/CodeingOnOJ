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
const int MAXN = 4e4;
const int MAXM = 1e5;

int dp[MAXN];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	clr(dp, INF);
	int n;
	cin >> n;
	int a, b, c, lim = 30005;
	dp[0] = 0;
	for(int i=1; i<=n; ++i){
		cin >> a >> b >> c;
		for(int j=lim; j>=0; --j){
			if(b)	dp[j] += b;
			else	dp[j] = INF;
			if(a && j>=a)	dp[j] = min(dp[j], dp[j-a]);
			if(c && j>=c)	dp[j] = min(dp[j], dp[j-c] + c);
		}
	}
	int ans = INF;
	for(int i=0; i<=lim; ++i)	ans = min(ans, max(i, dp[i]));
	cout << ans << endl;
	return 0;
}