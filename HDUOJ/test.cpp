/*
* @Author: Dicer
* @Date:   2018-10-10 17:01:07
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-10 17:50:37
*/
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

int dp[256][256][256];

int dfs(int n, int a, int b){
	if(dp[n][a][b] != -1)	return dp[n][a][b];
	if(n == 1){	return dp[n][a][b] = (a >= b);}
	int ans = 0;
	for(int j=1; j<=b; ++j){
		for(int i=j; i<=a; ++i){
			ans = max(ans, n - dfs(n-1, j, i));
		}
	}
	dp[n][a][b] = ans;
	return ans;
}
int main(int argc, char const *argv[])
{
	clr(dp, -1);
	int T;
	int n, a, b;
	cin >> T;
	while(T--){
		cin >> n >> a >> b;
		dfs(n, a, b);
		cout << dp[n][a][b] << endl;
	}
	return 0;
}