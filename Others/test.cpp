/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-12-01 18:57:33

---------------------------------*/

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
const double e = exp(1.0);
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
	
	double c, y;
	while(cin >> y){
		c = log(e*y)/(e*y);
		double l = 1, r = e, mid, ans1, ans2;
		while(r-l > eps){
			mid = (l+r)/2.0;
			if((log(mid)/mid - c) >= 0)	r = mid;
			else	l = mid;
		}
		ans1 = l;
		l = e; r = INF;
		while(r-l > eps){
			mid = (l+r)/2.0;
			if((log(mid)/mid - c) >= 0)	l = mid;
			else	r = mid;
		}
		ans2 = l;
		if(ans2-ans1 > 0.000001){
			printf("%.5lf %.5lf\n", ans1, ans2);
		} else	printf("%.5lf\n", ans1);
	}
	return 0;
}