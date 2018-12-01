#include<bits/stdc++.h>
typedef long long ll;
typedef pair<int, int > pii;
using namespace std;
const int MAXN = 5e5 + 7;
const int mod = 1e9 + 7;
vector<pii> G[MAXN];
int Node[MAXN], XOR[MAXN], fat[MAXN];
ll tot[MAXN];
int dfs(int x,int fa){
	fat[x] = fa;
    int sz = G[x].size();
    int res = 0;
    for(int i=0;i<sz;++i){
        int u = G[x][i].u;
        if(u != fa){
            res += dfs(u, x) + G[x][i].w;
        }
    }
    Node[x] = res;
    return Node[x];
}
int main(){
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

    int n;
    scanf("%d", &n);
    int u, v, w;
    for(int i=1;i<n;++i){
        scanf("%d %d %d", &u, &v, &w);
        u++, v++;
        G[v].push_back(make_pair(u, w));
        G[u].push_back(make_pair(v, w));
    }
    dfs(1, 0);
    for(int i=1;i<=n;++i){
    	int res = n-1;
		for(int j=0;j<(int)G[i].size();++j){
			int u = G[i][j];
			if(u != fat[i])	tot[i] += (ll)Node[u]*(res-Node[u]);
			else	tot[i] += (ll)(n-Node[i])*(Node[i]-1);
			//cout << u << ' ' << Node[u] << endl;
		}
		//cout << tot[i] << endl << endl;
		tot[i] /= 2;
		tot[i] += n-1;
    }
    int ans = 0;
    for(int i=1;i<=n;++i){
        if(tot[i]%2)	ans ^= XOR[i];
    }
    printf("%d\n", ans);
    return 0;
}