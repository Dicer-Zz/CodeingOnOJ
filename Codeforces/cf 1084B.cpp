/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-12-12 21:30:23

---------------------------------*/

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
const int MAXN = 3e5+7;
const int MAXM = 1e5;
ll Max(ll a, ll b){if(a > b)return a;return b;}
vector<pii> G[MAXN];
ll w[MAXN], val[MAXN];
ll ans = 0;
ll dfs(int x, int fa, int c){
	ll max = 0, smax = 0;
	val[x] += w[x];
	for(int i=0;i<(int)G[x].size();++i){
		int u = G[x][i].first;
		if(u == fa)	continue;
		smax = Max(smax, dfs(u, x, G[x][i].second));
		if(smax > max)	swap(smax, max);
	}
	ans = Max(ans, val[x]+smax+max);
	val[x] += max;
	return val[x]-c;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;++i)	scanf("%lld", &w[i]);
	int u, v, c;
	for(int i=1;i<n;++i){
		scanf("%d %d %d", &u, &v, &c);
		G[v].push_back(make_pair(u, c));
		G[u].push_back(make_pair(v, c));
	}
	dfs(1, 0, 0);
	printf("%lld\n", ans);
	return 0;
}