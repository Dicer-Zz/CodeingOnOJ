/*
* @Author: Dicer
* @Date:   2018-09-10 23:29:56
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-14 21:38:46
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
const int MAXN = 1e5;
const int MAXM = 1e5;

char mp[2333][2333];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int vis[2333][2333];
int n, m, sx, sy, L, R;
struct node{
	int x, y;
	int step;
	int l, r;
}q,p;

bool check(int x, int y){
	if(x<0 || x>=n || y<0 || y>=m)	return 0;
	return 1;
}
void bfs(){
	int ans = 1;
	queue<node> que;
	que.push((node){sx,sy,0,L,R});
	vis[sx][sy] = 1;
	while(!que.empty()){
		q = que.front();
		que.pop();
		for(int i=0; i<4; ++i){
			int fx = q.x + dx[i];
			int fy = q.y + dy[i];
			if(!check(fx,fy) || vis[fx][fy] || mp[fx][fy] == '*')	continue;
			if(q.r == 0 && i == 0)	continue;
			if(q.l == 0 && i == 1)	continue;
			if(vis[fx][fy] == 0){
				vis[fx][fy] = 1;
				ans++;
			}
			if(i == 0){
				que.push((node){fx,fy,q.step+1,q.l,q.r-1});
			} else if(i == 1){
				que.push((node){fx,fy,q.step+1,q.l-1,q.r});
			} else{
				que.push((node){fx,fy,q.step+1,q.l,q.r});
			}
		}
	}
	cout << ans << endl;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(vis[i][j])	cout << '+';
			else	cout << mp[i][j];
		}
		cout << endl;
	}
}
int main(int argc, char const *argv[])
{
	cin >> n >> m >> sx >> sy >> L >> R;
	sx--;
	sy--;
	for(int i=0;i<n;++i)	cin >> mp[i];
	bfs();
	return 0;
}

/*
20 7
3 6
5 2
......*
.****.*
.****.*
....*.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**....*
*******
*/