/*
* @Author: Dicer
* @Date:   2018-09-10 23:29:56
* @Last Modified by:   Dicer
* @Last Modified time: 2018-11-05 16:03:37
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
const int MAXN = 2e4;
const int MAXM = 2e4;


vector<int> G[MAXN];
int ans[MAXN], fat[MAXN], cnt[MAXN];
void add(int u, int v){
	G[u].push_back(v);
}

int DFS(int x, int fa){
	// cout << x << endl;
	fat[x] = fa;
	if(cnt[x])	return cnt[x];
	int size = G[x].size();
	int res = 0;
	for(int i=0;i<size;++i){
		int u = G[x][i];
		if(u != fa){
			res += DFS(u, x);
		}
	}
	cnt[x] = res + 1;
	return cnt[x];
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	int n, r, m, u, v;
	cin >> n >> r >> m;
	for(int i=1;i<n;++i){
		cin >> u >> v;
		add(u,v);
		add(v,u);
	}
	DFS(r, 0);
	for(int i=1; i<=n; ++i){
		int res = 0;
		int size = G[i].size();
		for(int j=0; j<size; ++j){
			int u = G[i][j];
			if(fat[i] != u){
				res += cnt[u];
				res %= mod;
			}
		}
		// cout << res << endl;
		for(int j=0; j<size; ++j){
			int u = G[i][j];
			if(fat[i] != u){
				ans[i] = ans[i] + (ll)cnt[u]*(res-cnt[u])%mod;
				ans[i] %= mod;
			}
		}
		ans[i] += 2*cnt[i]-1+mod;
		ans[i] %= mod;
		// cout << ans[i] << endl;
	}
	while(m--){
		cin >> r;
		cout << ans[r] << endl;
	}
	return 0;
}