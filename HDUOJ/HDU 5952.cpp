/*
* @Author: Dicer
* @Date:   2018-10-10 18:07:26
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-11 12:59:51
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
const int MAXN = 110;
const int MAXM = 110;

int n, m, s, cnt;
vector<int> G[MAXN];
int mp[MAXN][MAXN];
int in[MAXN];
void dfs(int u, int size){
	if(size == s){
		cnt++;
		return;
	}
	bool flag = 1;
	for(int i=0; i<G[u].size(); ++i){
		int v = G[u][i];
		flag = 1;
		for(int j=1; j<= size; ++j){
			if(!mp[v][in[j]]){
				flag = 0;
				break;
			}
		}
		if(flag){
			size++;
			in[size] = v;
			dfs(v, size);
			in[size] = 0;
			size--;
		}
	}
}
int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	while(T--){
		cin >> n >> m >> s;
		cnt = 0;
		clr(mp, 0);
		for(int i=1;i<=n;++i)	G[i].clear();
		int u, v;
		for(int i=1; i<=m; ++i){
			cin >> u >> v;
			if(u>v)	swap(u, v);
			G[u].push_back(v);
			// G[v].push_back(u);
			mp[u][v] = mp[v][u] = 1;
		}
		for(int i=1;i<=n;++i){
			clr(in, 0);
			in[1] = i;
			dfs(i, 1);
		}
		cout << cnt << endl;
	}
	return 0;
}