/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-10-23 21:43:37

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

int a[23];
int dfs(int x, string s){
	if(x == 0){
		if(s[0] == '0'){
			cout << 'B';
			return 1;
		} else{
			cout << 'I';
			return 2;
		}
	}
	int flag = 0;
	flag |= dfs(x-1, s.substr(0, a[x-1]));
	flag |= dfs(x-1, s.substr(a[x-1]));
	if(flag == 1){
		cout << 'B';
	} else if(flag == 2){
		cout << 'I';
	} else	cout << 'F';
	return flag;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	
	a[0] = 1;
	for(int i=1;i<=12;++i)	a[i] = a[i-1]*2;
	int n;
	string s;
	cin >> n >> s;
	dfs(n, s);
	// cout << s.substr(0,a[n-1]) << endl;
	// cout << s.substr(a[n-1]) << endl;

	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}