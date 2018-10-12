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

vector<ll> a;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n, k, x;
	cin >> n >> k;
	for(int i=1; i<=n; ++i)	{
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	int l, r, ml, mr, ans = 0;
	l = r = 0;
	ml = mr = 0;
	while(r<=n){
		if(a[r]-a[l] <= k && ans <= r-l+1){
			ans = r-l+1;
			ml = l; mr = r;
		}
		if(a[r]-a[l] <= k)	r++;
		else l++;
	}
	int res = ans;
	cout << ml << ' ' << mr;
	a.erase(a.begin() + ml, a.begin() + mrq);
	sort(a.begin(), a.end());
	cout << a[0] << endl;
	ans = 0;
	l = r = 0;
	while(r<=n){
		if(a[r]-a[l] <= k && ans <= r-l+1)	ans = r-l+1;
		if(a[r]-a[l] <= k)	r++;
		else l++;
	}
	res += ans;
	cout << res << endl;
	return 0;
}