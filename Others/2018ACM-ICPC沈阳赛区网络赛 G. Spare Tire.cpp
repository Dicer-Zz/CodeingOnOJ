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

ll pri[36];
ll getprime(ll m){
	clr(pri, 0);
	ll p = 0;
	for(int i=2; i*i<=m; ++i){
		if(m%i == 0){
			pri[p++] = i;
			while(m%i == 0)	m /= i;
		}
	}
	if(m != 1)	pri[p++] = m;
	return p;
}
ll inv6 = qpow(6, mod-2, mod);
ll inv2 = qpow(2, mod-2, mod);
ll getsum(ll n, ll res){
	n = n/res;
    return (n%mod*(n+1)%mod*(2*n+1)%mod*inv6%mod*res%mod*res%mod+n%mod*(n+1)%mod*inv2%mod*res%mod)%mod;;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	ll n, m;
	while(cin >> n >> m){
		int p = getprime(m);
		ll ans = 0, sum;
		sum = (n*(n+1)%mod)*(2*n+4)%mod*inv6%mod;
		// cout << p << endl;
		// cout << sum << endl;
		for(int i=1; i<(1<<p);++i){
			int cnt = 0;
			ll res = 1;
			for(int j=0; j < p; ++j){
				if(i&(1<<j)){
					res = res*pri[j]%mod;
					cnt++;
				}
			}
			if(cnt & 1){
				ans += getsum(n, res);
				ans %= mod;
			}
			else{
				ans -= getsum(n, res);
				ans %= mod;
			}
			// cout << res << endl;
		}
		cout << (sum%mod-ans%mod+mod)%mod << endl;
	}
	return 0;
}