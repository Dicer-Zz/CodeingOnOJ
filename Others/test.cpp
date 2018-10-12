/*
* @Author: Dicer
* @Date:   2018-09-10 23:29:56
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-12 11:35:44
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
const int MAXN = 2e5+100;
const int MAXM = 2e5+100;

ll a[MAXN];
ll h[MAXN];
int main(int argc, char const *argv[])
{
	ll n, k;
	cin >> n >> k;
	for(int i=1;i<=n;++i)	cin >> a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<=200010;++i){
		h[i] = n - (lower_bound(a+1,a+1+n,i)-a) + 1;
		// cout << h[i] << endl;
	}
	int cnt = 0;
	int sum = 0;
	for(int i=200010;i>=1;--i){
		sum += h[i];
		if(sum > k){
			sum = h[i];
			cnt++;
		}
		// cout << sum << ' ' << cnt << endl;
		if(h[i-1] == n){
			if(sum)	cnt++;
			break;
		}
	}
	cout << cnt << endl;
	return 0;
}