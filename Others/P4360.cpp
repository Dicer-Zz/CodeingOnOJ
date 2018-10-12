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
const int MAXN = 3e4;
const int MAXM = 3e4;

int w[MAXN], d[MAXN], l[MAXN];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)	cin >> w[i] >> d[i];
	l[n+1] = 0;
	for(int i=n; i>=1; --i){
		l[i] += d[i] + l[i+1];
	}
	// for(int i=1; i<=n; ++i)	cout << l[i] << ' ' << w[i] << endl;
	int ans = INF;
	for(int i=1; i<=n; ++i){
		for(int j=i+1; j<=n; ++j){
			int tmp = 0, pos = 1;
			while(l[pos] >= l[i] && pos <= n){
				tmp += (l[pos]-l[i])*w[pos];
				pos++;
			}
			while(l[pos] >= l[j] && pos <= n){
				tmp += (l[pos] - l[j])*w[pos];
				pos++;
			}
			while(pos <= n){
				tmp += l[pos]*w[pos];
				pos++;
			}
			// cout << i << ' ' << tmp << endl;
			ans = min(ans, tmp);
		}
	}
	cout << ans << endl;
	return 0;
}