/*
* @Author: Dicer
* @Date:   2018-10-16 22:31:59
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-17 13:01:20
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
const int MAXN = 1e5;
const int MAXM = 1e5;
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
    // memset(cur, 0, sizeof cur);
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
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif

	init();
	int n, m;
	cin >> n >> m;
	s = 0;
	t = 233;
	int u, v;
	while(cin >> u >> v && u != -1 && v != -1){
        add(u, v, 1);
    }
    for(int i=1;i<=n;++i){
        add(s,i,1);
    }
    for(int i=1;i<=m;++i){      
        add(i+n,t,1);
    }
	int ans = dinic();
    if(!ans)    cout << "No Solution!" << endl;
    else{
        cout << ans << endl;
        // for(int i=0;i<cnt;i=i+2)
        // {
        //     printf("%d %d\n",edge[i].u,edge[i].v);
        //     cout << edge[i].w << "*" << edge[i^1].w << endl;
        //     cout << "------------" << endl;
        // }
        for(int i=0;i<cnt;i=i+2)
        {
            if(edge[i].v==s||edge[i^1].v==s)    break;
            if(edge[i^1].w!=0)
            {
                printf("%d %d\n",edge[i^1].v,edge[i].v);
            }
        }
    }

	// #ifndef ONLINE_JUDGE
	//     double _end_time = clock();
	//     printf("time = %lf ms.", _end_time - _begin_time);
	// #endif
	return 0;
}