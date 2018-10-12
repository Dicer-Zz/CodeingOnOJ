/*
* @Author: Dicer
* @Date:   2018-10-11 13:01:05
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-11 14:07:08
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

// int a[5][5];
// int dx[4] = {0,0,1,-1};
// int dy[4] = {1,-1,0,0};
// int main(int argc, char const *argv[])
// {
// 	map<ll, ll> mp;
// 	ll n;
// 	cin >> n;
// 	mp[n] = 0;
// 	queue<ll> q;
// 	q.push(n);
// 	while(!q.empty()){
// 		ll u = q.front();
// 		// cout << u << endl;
// 		q.pop();
// 		if(u == 123804765)	break;
// 		int x,y,tmp = u;
// 		for(int i=3;i>=1;--i){
// 			for(int j=3;j>=1;--j){
// 				a[i][j] = tmp%10;
// 				tmp /= 10;
// 				if(a[i][j] == 0){
// 					x = i;
// 					y = j;
// 				}
// 			}
// 		}
// 		int fx,fy;
// 		for(int i=0;i<4;++i){
// 			fx = x + dx[i];
// 			fy = y + dy[i];
// 			if(fx<1 || fy<1 || fx>3 || fy>3)	continue;
// 			swap(a[x][y],a[fx][fy]);
// 			tmp = 0;
// 			for(int j=1;j<=3;++j){
// 				for(int k=1;k<=3;++k){
// 					tmp = (tmp*10 + a[j][k]);
// 				}
// 			}
// 			swap(a[x][y],a[fx][fy]);
// 			// cout << tmp << endl;
// 			if(!mp.count(tmp)){
// 				mp[tmp] = mp[u] + 1;
// 				q.push(tmp);
// 			}
// 		}
// 	}
// 	cout << mp[123804765] << endl;
// 	return 0;
// }

// A*

int fx[9]={0,1,1,1,2,3,3,3,2},fy[9]={0,1,2,3,3,3,2,1,1};
int dx[4]={1,-1,0,0},dy[4]={0,0,-1,1},a[4][4]={},n,m,x,y,z,X,Y,ans = 0;

int h(){
	int ans = 0;
	for(int i=1;i<=3;++i)for(int j=1;j<=3;++j)
		if(a[i][j])	ans+=abs(i-fx[a[i][j]])+abs(j-fy[a[i][j]]);
	return ans;
}
void dfs(int tf,int X,int Y,int g){
	int H = h();
	if(!H){ans=g;return;}
	if(g==tf||ans||H+g>tf)	return;
	for(int i=0;i<4;++i){
		int x = X+dx[i];
		int y = Y+dy[i];
		if(x&&y&&x<=3&&y<=3){
			swap(a[X][Y],a[x][y]);
			dfs(tf,x,y,g+1);
			swap(a[X][Y],a[x][y]);
		}
	}
}

int main(){
	ll n;
	cin >> n;
	if(n == 123804765)	{cout << 0 << endl;return 0;}
	for(int i=3;i>=1;--i)for(int j=3;j>=1;--j){
		a[i][j] = n%10;
		n /= 10;
		if(!a[i][j]) X=i,Y=j;
	}
	for(int i=0;;++i){
		dfs(i,X,Y,0);
		if(ans){
			cout << ans << endl;
			return 0;
		}
	}
}