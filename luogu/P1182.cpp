/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-12-07 13:32:15

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
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1e5 + 7;
const int MAXM = 1e5 + 7;


int a[MAXN];
int n, m;
bool go(int x){
	int cnt = 0;
	int cur = 0;
	bool flag = 1;
	for(int i=1;i<=n;++i){
		if(a[i] > x){
			flag = 0;
			break;
		}
		if(cur + a[i] > x){
			cnt++;
			cur = a[i];
		} else	cur += a[i];
	}
	if(cur)	cnt++;
	return flag && cnt <= m;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	cin >> n >> m;
	for(int i=1;i<=n;++i)	cin >> a[i];
	int l = 0, r = 1000000000, mid;
	while(l<=r){
		mid = (l+r) >> 1;
		if(go(mid))	r = mid - 1;
		else	l = mid + 1;
	}
	cout << l << endl;
	return 0;
}