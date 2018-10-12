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

int dp[10][3];
/*
dp[i][0]表示长度为i不含不幸运数字的数字的个数
dp[i][1]表示长度为i不含不幸运数字，且首位数字为2的数字的个数
dp[i][2]表示长度为i含不幸运数字的数字的个数
*/
void init();
int solve(int n);
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	init();
	int n, m;
	while(cin >> n >> m && n + m) {
		printf("%d\n", solve(m)-solve(n-1));
	}
	return 0;
}

void init() {
	dp[0][0]=1; dp[0][1]=0; dp[0][2]=0;
	for(int i=1; i<9; ++i) {
		dp[i][0] = dp[i-1][0]*9 - dp[i-1][1];
		dp[i][1] = dp[i-1][0];
		dp[i][2] = dp[i-1][2]*10 + dp[i-1][0] + dp[i-1][1];
		// printf("%d %d %d\n", dp[i][0], dp[i][1], dp[i][2]);
	}
}

int a[10];
int solve(int n) {
	int cnt = 0;
	int tmp = n;
	while(n) {
		a[++cnt] = n%10;
		n /= 10;
	}
	a[cnt+1] = 0;
	int ans = 0;
	bool flag = false;
	for(int i=cnt; i>=1; --i) {
		ans += dp[i-1][2]*a[i];
		if(flag)	ans += dp[i-1][0]*a[i];
		if(!flag && a[i] > 4) ans += dp[i-1][0];
		if(!flag && a[i+1] == 6 && a[i] > 2) ans += dp[i][1];
		if(!flag && a[i] > 6)	ans += dp[i-1][1];
		if(a[i] == 4 || (a[i+1] == 6 && a[i] == 2))	flag = true;
	}
	if(flag)	ans++;
	// printf("%d\n", ans);
	return tmp - ans;
}