#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 2e5+7;
const int MAXM = 1e5;

ll sum[MAXN], a[MAXN];
vector<int> G[MAXN];
ll res = 0, ans = 0;
void dfs(int x, int p, int h){
	res += (ll)(h*a[x]);
	sum[x] = a[x];
	for(int i=0;i<(int)G[x].size();++i){
		int to = G[x][i];
		if(to == p)	continue;
		dfs(to, x, h+1);
		sum[x] += sum[to];
	}
}
void go(int x, int p){
	ans = max(ans, res);
	for(int i=0;i<(int)G[x].size();++i){
		int to = G[x][i];
		if(to == p)	continue;
		res -= sum[to];
		sum[x] -= sum[to];
		res += sum[x];
		sum[to] += sum[x];

		go(to, x);

		sum[to] -= sum[x];
		res -= sum[x];
		sum[x] += sum[to];
		res += sum[to];
	}
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	int n;
	cin >> n;
	for(int i=1;i<=n;++i)	cin >> a[i];
	for(int i=1;i<n;++i){
		int u, v;
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	dfs(1, 0, 0);
	go(1, 0);
	cout << ans << endl;
	return 0;
}