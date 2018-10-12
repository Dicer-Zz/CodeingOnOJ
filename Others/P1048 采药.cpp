/*
* @Author: Dicer
* @Date:   2018-10-11 14:49:44
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-11 15:28:36
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
const int MAXN = 1e5;
const int MAXM = 1e5;

int dp[13000];
int cost[3500], val[3500];
int main(){
	int n, v;
	cin >> n >> v;
	for(int i=1;i<=n;++i)	cin >> cost[i] >> val[i];
	for(int i=1; i<=n; ++i){
		for(int j=v; j>=cost[i]; --j){
			dp[j] = max(dp[j-cost[i]]+val[i], dp[j]);
		}
	}
	cout << dp[v] << endl;
	return 0;
}