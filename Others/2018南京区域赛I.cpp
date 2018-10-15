#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e5;
const int MAXM = 3e5;

struct Edge{
    int next;
    int u, v, w;
};
int n, m, s, t;
int cnt, head[MAXN];
int dis[MAXN], cur[MAXN];
Edge edge[MAXM];
queue<int> que;

void init(){
    cnt = 0;
    memset(cur, 0, sizeof cur);
    memset(head, -1, sizeof head);
}
void add(int u, int v, int w){
    edge[cnt].u = u; edge[cnt].v = v;
    edge[cnt].w = w; edge[cnt].next = head[u];
    head[u] = cnt++;
    edge[cnt].u = v; edge[cnt].v = u;
    edge[cnt].w = 0; edge[cnt].next = head[v];
    head[v] = cnt++;
}

int bfs(){
    while(!que.empty()) que.pop();
    memset(dis, -1, sizeof dis);
    que.push(s); dis[s] = 0;
    while(!que.empty()){
        int x = que.front(); que.pop();
        if(x == t)	return 1;
        for(int i=head[x]; ~i; i=edge[i].next){
            int& v = edge[i].v, w = edge[i].w;
            if(dis[v] == -1 && w > 0){
                dis[v] = dis[x] + 1;
                que.push(v);
            }
        }
    }
    return 0;
}

int dfs(int x, int maxflow){
    if(x == t || !maxflow)	return maxflow;
    int flow = 0;
    for(int i=head[x]; ~i; i=edge[i].next){
        int& v = edge[i].v, w = edge[i].w;
        if(dis[x] + 1 == dis[v] && w > 0){
            int delta = dfs(v, min(maxflow-flow, w));
            if(delta > 0){
                edge[i].w -= delta;
                edge[i^1].w += delta;
                flow += delta;
                maxflow -= delta;
                if(!maxflow)	break;
            }
        }
    }
    return flow;
}

int dinic(){
    int ans = 0;
    while(bfs()){
        ans += dfs(s, INF);
    }
    return ans;
}

int main(int argc, char const *argv[])
{
	init();
	int k, x, q;
	cin >> n >> m >> k;
	for(int i=1; i<=n; ++i){
		cin >> q;
		for(int j=1; j<=q; ++j){
			cin >> x;
			add(i, x+n, 1);
			add(x+n, i, 1);
		}
	}
	int s1 = 23333;
	s = 0;
	t = 33333;
	for(int i=1; i<=n; ++i){
		add(i, s1, 2);
		add(s1, i, 2);
	}
	for(int i=1; i<=m; ++i){
		add(i+n, t, 1);
		add(t, i+n, 1);
	}
	// cout << '#' << endl;
	add(s, s1, n+k);
	add(s1, s, n+k);
	cout << dinic() << endl;
	return 0;
}
/*
3 5 2
4 1 2 3 5
2 2 5
2 1 2

5 10 2
2 3 10
5 1 3 4 6 10
5 3 4 6 8 9
3 1 9 10
5 1 3 6 7 10
*/