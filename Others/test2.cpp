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

int dp[10], p;
void solve(int res){
	for(int i=1; i<=7; ++i){
		bool flag = 1;
		for(int j=0; j<=2; ++j){
			if(((res>>j)&1) && !((i>>j)&1))	flag = 0;
		}
		if(flag) dp[i] = min(dp[i], dp[i-res] + p);
	}
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	while(cin >> n){
		int res;
		string s;
		clr(dp, 0x3f);
		dp[0] = 0;
		for(int i=1; i<=n; ++i){
			cin >> p;
			cin >> s;
			res = 0;
			if((int)s.find('A') != -1)	res+=1;
			if((int)s.find('B') != -1)	res+=2;
			if((int)s.find('C') != -1)	res+=4;
			// cout << res << endl;
			for(int i=1; i<=7; ++i){
				bool flag = 1;
				for(int j=0; j<=2; ++j){
					if(((i>>j)&1) && !((res>>j)&1)){
						flag = 0;
					}
				}
				if(flag) solve(i);
			}
			// cout << dp[7] << endl;
		}
		if(dp[7] >= INF)	puts("-1");
		else cout << dp[7] << endl;
	}
	return 0;
}