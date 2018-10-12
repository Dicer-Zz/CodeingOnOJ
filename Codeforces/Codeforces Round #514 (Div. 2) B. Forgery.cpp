/*
* @Author: Dicer
* @Date:   2018-10-09 16:01:44
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-09 16:28:41
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

char mp[1024][1024];
int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	for(int i=0;i<n;++i)	cin >> mp[i];
	for(int i=1;i<n-1;++i){
		for(int j=1;j<m-1;++j){
			if(mp[i-1][j-1] != '.' && mp[i-1][j] != '.' && mp[i-1][j+1] != '.' && mp[i][j-1] != '.' && 
			   mp[i][j+1] != '.'&& mp[i+1][j-1] != '.'&& mp[i+1][j] != '.' && mp[i+1][j+1] != '.'){
				mp[i-1][j-1] = '$';
				mp[i-1][j] = '$';
				mp[i-1][j+1] = '$';
				mp[i][j-1] = '$';
				mp[i][j+1] = '$';
				mp[i+1][j-1] = '$';
				mp[i+1][j] = '$';
				mp[i+1][j+1] = '$';
			}
		}
	}
	int flag = 1;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(mp[i][j] == '#')	flag = 0;
		}
	}
	if(flag)	cout << "YES" << endl;
	else	cout << "NO" << endl;
	return 0;
}