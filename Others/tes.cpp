/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-10-12 19:59:33

---------------------------------*/

#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
#define LL __int128;
#define clr(s, x) memset(s, x, sizeof(s))
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
inline LL read(){int r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline LL readll(){ll r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline LL qpow(LL a,LL b){LL res=1;while(b){if(b&1)res = res*a;a=a*a;b>>=1;}return res;}
inline ll gcd(ll a,ll b){while(b^=a^=b^=a%=b);return a;}
const double eps = 1e-8;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e5;
const int MAXM = 1e5;
inline void print(LL x)
{
    if(x>9)
        print(x/10);
    putchar(x%10+'0');
}
LL a[81][81];

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			a[i][j] = read();
		}
	}
	LL ans = 0;
	for(int i=1; i<=n; ++i){
		int p = 1, q = m;
		LL cnt = 1;
		while(p<=q){
			if(a[i][p] >= a[i][q]){
				ans += a[i][q--]*qpow((LL)2,cnt++);
			}
			else{
				ans += a[i][p++]*qpow((LL)2,cnt++);
			}
		}
	}
	print(ans);
	return 0;
}
