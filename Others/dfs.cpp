#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;
const int MAXN = 200010;
const int mod = 1e9 + 7;
vector<int> G[MAXN];
int vis[MAXN], in[MAXN];
int son[MAXN], dp[MAXN];
long long ans;

void dfs(int x) {
	if(!G[x].size()) {
		son[x] = 1;
		return ;
	}
	for(int i = 0; i < G[x].size(); ++i) {
		int u = G[x][i];
		if(vis[u]) {
			son[x] += son[u];
			son[x] %= mod;
			continue;
		}
		vis[u] = 1;
		dfs(u);
		dp[x] += dp[u];
		son[x] += son[u];
		dp[x] %= mod, son[x] %= mod;
	}
	dp[x] += son[x]++;
	dp[x] %= mod, son[x] %= mod;
}

int main() {
	 // freopen("in3.txt", "r", stdin);
	 // freopen("out3.txt", "w", stdout);
	int n, m, T;
	scanf("%d", &T);
	while(T--) {
		for(int i = 0; i < MAXN; ++i) G[i].clear(), son[i] = 0;
		for(int i = 0; i < MAXN; ++i) vis[i] = in[i] = dp[i] = 0;
		scanf("%d %d", &n, &m);
		for(int i = 0; i < m; ++i) {
			int a, b;
			scanf("%d %d", &a, &b);
			in[b]++;
			G[a].push_back(b);
		}
		for(int i = 1; i <= n; ++i) {
            sort(G[i].begin(), G[i].end());
            G[i].erase(unique(G[i].begin(), G[i].end()), G[i].end());
        }
		ans = 0;
		for(int i = 1; i <= n; ++i) {
			if(in[i]) continue;
			dfs(i);
			ans += dp[i];
			ans %= mod;
		}
		printf("%lld\n", ans);
	}
	return 0;
}