/*
* @Author: Dicer
* @Date:   2018-07-27 20:12:22
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-30 13:35:26
*/

#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>
#include <queue>
#include <time.h>
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
const int N = 1e5;
const int M = 1e5;

struct EDGE{
    int next;
    int to;
    int w;
}edge[M];

int n,m,k,s,e,cnt;
int head[N],dis[N];
bool vis[N]; 

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
    memset(dis, INF, sizeof dis);
    memset(vis, 0, sizeof vis);
    priority_queue<NODE> que;
    p.id = s; p.dist = 0; 
    dis[s] = 0; que.push(p); 
    while(!que.empty()){
        q = que.top(); que.pop();
        // cout << q.id << endl;
        if(vis[q.id])   continue;
        vis[q.id] = true;
        for(int i=head[q.id]; ~i; i=edge[i].next){
            int u = edge[i].to;
            if(dis[u] > q.dist + edge[i].w){
                dis[u] = q.dist + edge[i].w;
                p.id = u;
                p.dist = dis[u];
                que.push(p);
            }
        }
    }
    cout << dis[n] << endl;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	
	int u, v, w;
	while(cin >> m >> n){
		cnt = 0;
		memset(head, -1, sizeof head);
		s = 1; e = n;
		while(m--){
			cin >> u >> v >> w;
			add(u,v,w);
			add(v,u,w);
		}
		Dijkstra();
	}

	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}