#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <vector>
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
const int MAXN = 2e5;
const int MAXM = 2e5;

struct EDGE{
	int u, v, w;
	int next;
};
int head[MAXN], cnt, road[MAXN], k, vis[MAXN];
vector<EDGE> G;
void init(){
	cnt = 0; k = 0;
	clr(head, -1);
	clr(vis, 0);
}
void add(int u, int v){
	EDGE e;
	e.u = u; e.v = v; e.next = head[u];
	G.push_back(e);
	head[u] = cnt++;
}
void dfs(int x){
	// printf("%d\n", x);
	for(int i = head[x]; ~i; i=G[i].next){
		// cout << i << endl;
		if(!vis[i]){
			vis[i] = true;
			dfs(G[i].v);
		}
	}
	printf("%d\n", x);
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	init();
	int n, m;
	cin >> n >> m;
	int u, v;
	for(int i=1; i<=m; ++i){
		cin >> u >> v;
		add(u, v);
		add(v, u);
	}
	dfs(1);
	return 0;
}