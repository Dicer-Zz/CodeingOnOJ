/*
* @Author: Dicer
* @Date:   2018-09-13 08:18:07
* @Last Modified by:   Dicer
* @Last Modified time: 2018-12-06 13:52:46
*/
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
#define clr(s, x) memset(s, x, sizeof(s))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pii;
const int MAXN = 1e5;
const int MAXM = 1e5;
int n, m, T;
vector<pii > G[MAXN];
ll dis1[MAXN], dis2[MAXN];
void Dij(){
	clr(dis1, 0x3f); clr(dis2, 0x3f);
	priority_queue<pii > q;
	dis1[1] = 0; q.push(make_pair(0, 1));
	while(!q.empty()){
		pii p = q.top(); q.pop();
		int u = p.second;
		// cout << u << endl;
		// cout << dis2[u] << ' ' << -p.first << endl;
		if(dis2[u] < -p.first)	continue;
		for(int i=0;i<(int)G[u].size();++i){
			int v = G[u][i].first;
			ll w = G[u][i].second;
			if(dis2[v] > w - p.first){
				dis2[v] = w - p.first;
				q.push(make_pair(-dis2[v], v));
			}
			if(dis2[v] < dis1[v])	swap(dis1[v], dis2[v]);
		}
	}
	printf("%lld\n", dis2[n]);
}
int main(int argc, char const *argv[])
{
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &n, &m);
		for(int i=1;i<=n;++i)	G[i].clear();
		ll u, v, w;
		for(int i=1;i<=m;++i){
			scanf("%d %d %d", &u, &v, &w);
			G[u].push_back(make_pair(v, w));
			G[v].push_back(make_pair(u, w));
		}
		Dij();
	}
	
	return 0;
}