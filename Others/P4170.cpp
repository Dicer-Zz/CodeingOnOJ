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

int dp[55][55];
string s;
int dfs(int l, int r){
	if(dp[l][r] != -1)	return dp[l][r];
	if(l == r)	return dp[l][r] = 1;
	int res = INF;
	if(s[l] == s[r])	res = min(dfs(l,r-1), dfs(l+1,r));
	else {
		for(int k=l; k<r; ++k){
			res = min(res, dfs(l,k) + dfs(k+1,r));
		}
	}
	return dp[l][r] = res;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	clr(dp, -1);
	cin >> s;
	int n = s.length();
	cout << dfs(0,n-1) << endl;
	return 0;
}