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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1e5;
const int MAXM = 1e5;

ll dp[21][3];
int a[21];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	dp[0][0] = 1;
	for(int i=1; i<21; ++i) {
		dp[i][0] = 10*dp[i-1][0] - dp[i-1][1];
		dp[i][1] = dp[i-1][0];
		dp[i][2] = 10*dp[i-1][2] + dp[i-1][1];
	}
	int T;
	cin >> T;
	while (T--) {
		ll n;
		cin >> n;
		n++;
		int cnt = 0;
		while(n) {
			a[++cnt] = n%10;
			n /= 10;
		}
		ll ans = 0; int last = 0; bool flag = false;
		for(int i=cnt; i>=1; --i) {
			ans += dp[i-1][2]*a[i];
			if(flag)	ans += dp[i-1][0]*a[i];
			if(!flag && a[i] > 4)	ans += dp[i-1][1];
			if(last == 4 && a[i] == 9)	flag = true;
			last = a[i];
		}
		printf("%I64d\n", ans);
	}
	return 0;
}