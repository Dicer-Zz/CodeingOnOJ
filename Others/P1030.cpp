/*
* @Author: Dicer
* @Date:   2018-10-23 22:13:58
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-23 22:38:08
*/
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

void dfs(string a, string b){
	if(a.size() < 1){return;}
	char p = b[b.size()-1];
	int pos = a.find(p);
	cout << p;
	dfs(a.substr(0,pos), b.substr(0,pos));
	dfs(a.substr(pos+1), b.substr(pos, b.size()-pos-1));
}
int main(int argc, char const *argv[])
{
	// #ifndef ONLINE_JUDGE
	//     freopen("in.txt", "r", stdin);
	//     freopen("out.txt", "w", stdout);
	//     double _begin_time = clock();
	// #endif
	
	string a, b;
	cin >> a >> b;
	dfs(a, b);

	// #ifndef ONLINE_JUDGE
	//     double _end_time = clock();
	//     printf("time = %lf ms.", _end_time - _begin_time);
	// #endif
	return 0;
}