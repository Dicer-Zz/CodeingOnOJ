/*
* @Author: Dicer
* @Date:   2018-11-08 16:33:02
* @Last Modified by:   Dicer
* @Last Modified time: 2018-11-08 22:21:34
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
const int MAXN = 2e5;
const int MAXM = 2e5;


vector<int > b;
int a[MAXN],y[MAXN],c[MAXN];
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	int n, m, x;
	cin >> n >> m;
	for(int i=1;i<=n+m;++i){
		cin >> a[i];	
	}
	for(int i=1;i<=n+m;++i){
		cin >> y[i];
		if(y[i]){
			b.push_back(a[i]);
		}
	}
	for(int i=1;i<=n+m;++i){
		if(y[i])	continue;
		x = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
		// cout << i << ' ' << x << endl;
		if(x == 0){
			c[0]++;
		} else if(x == m){
			c[m-1]++;
		} else{
			if(abs(b[x]-a[i]) >= abs(a[i]-b[x-1])){
				c[x-1]++;
			} else{
				c[x]++;
			}
		}
	}
	for(int i=0;i<m;++i){
		cout << c[i] << ' ';
	}
	return 0;
}