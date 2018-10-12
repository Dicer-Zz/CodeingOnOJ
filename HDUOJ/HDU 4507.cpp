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
const int INF = 0x3f3f3f3f;
const ll mod = 1e9+7;
const int MAXN = 1e5;
const int MAXM = 1e5;

ll inv6 = 166666668;
ll dp[23][10][10], bit[23];
/*
dp[i][j][k]
长度为i，数位和mod为j，数mod为k的个数
*/
ll dfs(int pos, int dmod, int nmod, ll res, int lim) {
	if(pos <= 0)	return dmod==0 && nmod==0;
	if(!lim && dp[pos][dmod][nmod] != -1)	return dp[pos][dmod][nmod];
	ll ans = res*10, dmodx, nmodx, resx, num;
	num = lim?bit[pos]:9;
	for(int i=0; i<=num; ++i) {
		dmodx = (dmod+i)%7;
		nmodx = (nmod*10+i)%7;
		resx = (resx*10+i)%mod;
		ans += dfs(pos-1, dmodx, nmodx, resx, lim&&i==num);
	}
	if(!lim)	dp[pos][dmod][nmod] = ans;
	return ans;
}
ll calc(ll n){
	return (((((n%mod)*((n+1)%mod))%mod*((2*n+1)%mod))%mod)*inv6)%mod;
}
ll solve(ll n){
	clr(bit, 0);
	ll tmp = n;
	int cnt = 0;
	while(n){
		bit[++cnt] = n%10;
		n /= 10;
	}
	return (calc(tmp)-dfs(cnt, 0, 0, 0, 1))%mod;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	clr(dp, -1);
	int T;
	cin >> T;
	while(T--){
		ll l, r;
		cin >> l >> r;
		cout << (solve(r)-solve(l-1)+mod*mod)%mod << endl;
	}
	return 0;
}