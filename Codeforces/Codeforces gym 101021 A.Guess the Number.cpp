/*
* @Author: Dicer
* @Date:   2018-10-15 13:39:53
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-15 14:23:45
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

int main(int argc, char const *argv[])
{
	int l = 1, r = 1e6, mid;
	string x;
	while(l != r){
		mid = (l+r+1)>>1;
		cout << mid << "\n" << flush;
		cin >> x;
		if(x == ">=")	l = mid;
		else	r = mid-1;
	}
	cout << l << "\n" << flush;
	return 0;
}