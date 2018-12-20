/*
* @Author: Dicer
* @Date:   2018-12-06 11:35:20
* @Last Modified by:   Dicer
* @Last Modified time: 2018-12-06 12:08:51
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

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE 
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	int n, m, s;
	cin >> n >> m >> s;
	ll ans = 0;
	for(int a=1;a<=n;a += 2){
		for(int b=1;b<=m;b += 2){
			int cd = s - a*b;
			if(cd == 0)	{
				ans += (ll)((a+1)*(b+1)/2-1)*(n-a+1)*(m-b+1);
				continue;
			}
			if(cd < 0)	continue;
			for(int c=1;c<b;c += 2){
				if(cd%(2*c) == 0 && a+cd/c<=n)	ans += 2ll*(n-a-cd/c+1)*(m-b+1); 					
			}
		}
	}
	cout << ans << endl;
	return 0;
}