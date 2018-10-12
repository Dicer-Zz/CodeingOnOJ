/*
* @Author: Dicer
* @Date:   2018-10-11 15:30:27
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-11 15:57:25
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

int dp[220][220];
int a[220];
int sum[220];
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> a[i];
		sum[i] = a[i] + sum[i-1];
	}
	for(int i=n+1;i<=2*n;++i){
		a[i] = a[i-n];
		sum[i] = a[i] + sum[i-1];
	}
	clr(dp, 0x3f);
	for(int len = 1; len <= n; ++len){
		for(int i=1; i<=2*n-1; ++i){
			int j = len + i - 1;
			if(i == j)	{dp[i][j] = 0; continue;}
			for(int k=i; k<j && k<=2*n-1; ++k){
				dp[i][j] = min(dp[i][j],dp[i][k]+dp[k+1][j]+sum[j]-sum[i-1]);
			}
		}
	}
	int ans = INF;
	for(int i=1;i<=n;++i)	ans = min(ans, dp[i][i+n-1]);
	cout <<	ans << endl;
	for(int len = 2; len <= n; ++len){
		for(int i=1; i<=2*n-1; ++i){
			int j = len + i - 1;
			// if(i == j)	{dp[i][j] = a[i]; continue;}
			for(int k=i; k<j && k<=2*n-1; ++k){
				dp[i][j] = max(dp[i][j],dp[i][k]+dp[k+1][j]+sum[j]-sum[i-1]);
			}
		}
	}
	ans = 0;
	for(int i=1;i<=n;++i)	ans = max(ans, dp[i][i+n-1]);
	cout <<	ans << endl;
	return 0;
}