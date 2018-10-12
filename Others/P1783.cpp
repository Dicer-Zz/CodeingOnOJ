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

struct EDGE{
	int u, v;
	double w;
};
bool cmp(EDGE a, EDGE b){
	return a.w < b.w;
}
vector<EDGE> G;
double x[MAXN], y[MAXN];
int pre[MAXN];
double dist(int i, int j){
	return sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
}
int find(int x){
	if(x == pre[x])	return x;
	else	return pre[x] = find(pre[x]);
}
void merge(int x, int y){
	int fx = find(x);
	int fy = find(y);
	if(fx != fy)	pre[fx] = fy;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	double l;
	int n;
	G.clear();
	cin >> l >> n;
	for(int i=1; i<=n; ++i)	cin >> x[i] >> y[i];
	for(int i=1; i<n; ++i){
		for(int j=i+1; j<=n; ++j){
			G.push_back((EDGE){i, j, dist(i,j)/2.0});
		}	
	}
	for(int i=1; i<=n; ++i){
		G.push_back((EDGE){i, 0, x[i]});
		G.push_back((EDGE){i, n+1, l-x[i]});
	}
	sort(G.begin(),G.end(),cmp);
	for(int i=0; i<=n+1; ++i)	pre[i] = i;
	for(int i=0; ; ++i){
		merge(G[i].u, G[i].v);
		if(find(0) == find(n+1)){
			cout << fixed << setprecision(2) << G[i].w <<endl;
			break;
		}
	}
	return 0;
}