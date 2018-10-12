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

struct EDGE{
	int u, v, w;
	int next;
};
int head[MAXN], vis[MAXN], cnt;
vector<EDGE> G;

void add(int u, int v, int w){
	EDGE e;
	e.u = u; e.v = v; e.w = w; e.next = head[u];
	G.push_back(e);
	head[u] = cnt++;
}
int dp[7][233];
int dfs(int x, int pos){
	if(dp[x][pos] != -1)	return dp[x][pos];
	int res = 0;
	for(int i=head[x]; ~i; i = G[i].next){
		if(!vis[i] && !vis[i^1]){
			vis[i] = true;
			vis[i^1] = true;
			res = max(res, dfs(G[i].v, i) + G[i].w);
			vis[i] = false;
			vis[i^1] = false;
		}
	}
	dp[x][pos] = res;
	return res;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cnt = 0;
	clr(head, -1);
	int n, u, v, w;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> u >> w >> v;
		add(u, v, w);
		add(v, u, w);
	}
	int ans = 0;
	for(int i=1; i<=4; ++i){
		clr(vis, 0);
		clr(dp, -1);
		int res = dfs(i, 0);
		ans = max(ans, res);
	}
	cout << ans << endl;
	return 0;
}