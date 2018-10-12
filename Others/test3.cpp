#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+100;
vector<int> G[N];
vector<int> C[N];
bool vis[N];
int dis[N];
void dfs(int x){
	int size = G[x].size();
	for(int i=0;i<size;++i){
		int u = G[x][i];
		int w = C[x][i];
		if(!vis[u]){
			vis[u] = 1;
			dis[u] = dis[x] + w;
			dfs(u);
			vis[u] = 0;
		}
	}
}
int main(int argc, char const *argv[])
{
	int n,k,u,v,w;
	scanf("%d %d",&n,&k);
	for(int i=1;i<n;++i){
		scanf("%d %d %d",&u,&v,&w);
		G[u].push_back(v);
		G[v].push_back(u);
		C[u].push_back(w);
		C[v].push_back(w);
	}
	vis[1] = 1;
	dis[1] = 0;
	dfs(1);
	int cnt = 0;
	for(int i=1;i<=n;++i){
		if(dis[i] > k)	cnt++;
	}
	printf("%.6lf\n",cnt*1.0/n);
	return 0;
}

