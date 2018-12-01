/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-11-12 21:36:05

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
const int MAXN = 1e5;
const int MAXM = 1e5;

string a, b;
ll dp[1024][4];
ll dfs(string s, int x, int sta, int lim){
	if(x == -1)	return 1;
	// cout << x << endl;
	if(!lim && dp[x][sta] != -1)	return dp[x][sta];
	ll res = 0, up = lim?s[x]-'A':25;
	for(int i=0;i<=up;++i){
		if(i+'A' == 'H'){
			res += dfs(s, x-1, 1, i==up&&lim);
			res %= mod;
		}
		else if(i+'A' == 'P' && sta == 1){
			res += dfs(s, x-1, 2, i==up&&lim);
			res %= mod;
		}
		else if(i+'A' == 'U'	&& sta == 2)	continue;
		else{
			res += dfs(s, x-1, 0, i==up&&lim);
			res %= mod;
		}
	}
	if(!lim)	dp[x][sta] = res;
	return res;
}
ll cnt(string s){
	ll base = 1;
	int len = s.length();
	ll ans = 0;
	for(int i=0;i<len;++i){
		ans += (s[i]-'A')*base;
		ans %= mod;
		base *= 26LL;
		base %= mod;
	}
	return ans+1;
}
ll go(string s){
	return dfs(s, s.length()-1, 0, 1);
}
int main(){
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	clr(dp, -1);
	int T;
	cin >> T;
	int kas = 1;
	while(T--){
		cin >> a >> b;
		if(a != "A"){
			int len = a.length();
			if(a[len-1] == 'A'){
				int i = len -1;
				while(a[i] == 'A'){
					a[i] = 'Z';
					i--;
				}
				a[i] -= 1;
			} else{
				a[len-1] -= 1;
			}
		}
		// cout << a << endl;
		ll n, m;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		n = cnt(a);
		m = cnt(b);
		// cout << n << ' ' << m << endl;
		// cout << a << ' ' << b << endl;
		// cout << go(a) << ' ' << go(b) << endl;
		cout << "Case " << "#" << kas++ << ": ";
		cout << (m-n-go(b)+go(a)+mod)%mod << endl;
	}
	return 0;
}