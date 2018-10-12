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

void init();
int solve(int n);

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	init();
	int n, m;
	while(cin >> n >> m)
		printf("%d\n", solve(m)-solve(n-1));
	return 0;
}
int dp[12][10];

void init() {
	clr(dp, 0);
	dp[1][0] = 1; dp[1][1] = 1;dp[1][2] = 1; dp[1][3] = 1; dp[1][4] = 1; dp[1][5] = 1;
	dp[1][6] = 1; dp[1][7] = 1;dp[1][8] = 1; dp[1][9] = 1;
	for(int i=2; i<12; ++i) {
		for(int j=0; j<10; ++j) {
			for(int k=0; k<10; ++k) {
				if(abs(j-k) >= 2)	dp[i][j] += dp[i-1][k];
			}
		}
	}
}

int a[12];
int solve(int n){
	if(!n)	return n;
	int cnt = 0;
	while(n) {
		a[++cnt] = n%10;
		n /= 10;
	}
	a[cnt + 1] = -10;
	int ans = 0;
	bool flag = true;
	for(int i=1; i<cnt; ++i) {
		for(int j=1; j<=9; ++j) {
			ans += dp[i][j];
		}
	}
	for(int i=1; i<a[cnt]; ++i) {
		ans += dp[cnt][i];
	}
	for(int i=cnt-1; i>=1; --i) {
		for(int j=0; j<a[i]; ++j) {
			if(abs(j-a[i+1]) >= 2)	ans += dp[i][j];
		}
		if(abs(a[i]-a[i+1]) < 2){
			flag = false;	break;
		}
	}
	if(flag)	ans++;
	return ans;
}