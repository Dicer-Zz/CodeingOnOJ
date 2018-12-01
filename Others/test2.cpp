/*
* @Author: Dicer
* @Date:   2018-07-27 20:12:22
* @Last Modified by:   Dicer
* @Last Modified time: 2018-11-16 23:26:23
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
const int MAXN = 1e6+7;
const int MAXM = 1e5;

vector<char > mp[MAXN];
vector<int > vis[MAXN];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int n, m;
int dfs(int x, int y){
	int ans = 0;
	for(int i=0;i<4;++i){
		int xx = x+dx[i];
		int yy = y+dy[i];
		if(!(xx>=0 && y>=0 && x<n && y<m))	continue;
		if(mp[xx][yy] == '#' || vis[xx][yy])	continue;
		
	}
	if(ans)	mp[x][y] = '#';
	return ans;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	char x;
	cin >> n >> m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >> x;
			mp[i].push_back(x);
			vis[i].push_back(0);
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(vis[i][j] == 0 && mp[i][j] != '#'){
				dfs(i, j);
			}
		}
	}
	int cnt = 0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			// cout << vis[i][j] << endl;
			if(vis[i][j] == 0 || mp[i][j] != '#'){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}