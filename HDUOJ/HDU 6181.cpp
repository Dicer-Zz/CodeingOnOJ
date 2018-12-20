/*
* @Author: Dicer
* @Date:   2018-12-06 12:56:20
* @Last Modified by:   Dicer
* @Last Modified time: 2018-12-06 13:25:01
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
const int MAXN = 1e5 + 7;
const int MAXM = 1e5 + 7;

struct EDGE{
    int next;
    int to;
    int w;
}edge[MAXM];

int n,m,k,s,e,cnt;
int head[MAXN];
ll dis[MAXN], dis2[MAXN];
bool vis[MAXN]; 

void add(int u, int v, int w){
    edge[cnt].next = head[u];
    edge[cnt].to = v;
    edge[cnt].w  = w;
    head[u] = cnt++;
}

struct NODE{
    int id,dist;
}q,p;
bool operator < (NODE a, NODE b){
    return a.dist > b.dist;
}
void Dijkstra(){
    memset(dis, 0x3f, sizeof dis);
    memset(dis2, 0x3f, sizeof dis2);
    priority_queue<NODE> que;
    p.id = s; p.dist = 0; 
    dis[s] = 0; que.push(p); 
    while(!que.empty()){
        q = que.top(); que.pop();
        // cout << q.id << endl;
        if(dis2[q.id] < q.dist)   continue;
        for(int i=head[q.id]; ~i; i=edge[i].next){
            int u = edge[i].to;
            if(dis2[u] > q.dist + edge[i].w){
                dis2[u] = q.dist + edge[i].w;
                p.id = u;
                p.dist = dis2[u];
                que.push(p);
            }
            if(dis[u] > dis2[u])	swap(dis[u], dis2[u]);
        }
    }
    printf("%I64d\n", dis2[e]);
}
int main(int argc, char const *argv[])
{
	int T;
	scanf("%d", &T);
	while(T--){
		int n, m;
		scanf("%d %d", &n, &m);
		for(int i=1;i<=n;++i)	head[i] = -1;
		cnt = 1;
		s = 1; e = n;
		int u, v, w;
		for(int i=1;i<=m;++i){
			scanf("%d %d %d", &u, &v, &w);
			add(u, v, w);
			add(v, u, w);
		}
		Dijkstra();
	}
	return 0;
}