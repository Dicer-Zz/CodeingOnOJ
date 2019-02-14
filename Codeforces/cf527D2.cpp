/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-12-20 21:04:32

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
const int MAXN = 2e5 + 7;
const int MAXM = 1e5;

int sta[MAXN];
int main(int argc, char const *argv[])
{
	int n, x, base = 0,top = 0, pre = -1, flag = 1;
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> x;
		if(top == base){
			sta[++top] = x;
			flag = 1;
		}
		else{
			if(sta[top] == x && (x >= pre || flag)){
				--top;
				pre = x;
				flag = 0;
			} else{
				sta[++top] = x;
				flag = 1;
			}
		}
	}
	if(top - base >= 2)	puts("NO");
	else if(top == base || sta[top] >= pre)	puts("YES");
	else	puts("NO");
	return 0;
}