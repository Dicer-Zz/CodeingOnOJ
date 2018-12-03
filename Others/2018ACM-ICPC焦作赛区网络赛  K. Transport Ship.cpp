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
const int MAXN = 1e4+10;
const int MAXM = 1e4+10;

ll dp[MAXN];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int T, V, C, n, q, s;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &n, &q);
		clr(dp, 0);
		dp[0] = 1;
		for(int i=1; i<=n; ++i){
			scanf("%d %d", &V, &C);
			for(int k=0; k<C; ++k){
				int v = V<<k;
				for(int j=MAXN; j>=v; --j){
					dp[j] += dp[j-v];
					dp[j] %= mod;
				}
			}
		}
		while(q--){
			scanf("%d", &s);
			printf("%lld\n", dp[s]);
		}
	}
	return 0;
}