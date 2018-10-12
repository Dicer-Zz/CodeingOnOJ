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

int dp[10][4], bit[10];
/*
dp[i][j]长度为i
j==1，不含62
j==2，不含62，末尾为6
j==3，含62或4
*/
int dfs(int pos, int have, int lim){
	if(pos <= 0)	return have==3;
	if(!lim && dp[pos][have] != -1)
		return dp[pos][have];
	int ans = 0, havex, num;
	num = lim?bit[pos]:9;
	for(int i=0; i<=num; ++i) {
		havex = have;
		if(have == 1 && i == 6)	havex = 2;
		if(have == 2 && i != 6)	havex = 1;
		if(have == 2 && i == 2) havex = 3;
		if(i == 4)	havex = 3;
		ans += dfs(pos-1, havex, lim&&i==num);
	}
	if(!lim)	dp[pos][have] = ans;
	// printf("%d\n", ans);
	return ans;
}
int solve(int n){
	clr(bit, 0);
	clr(dp, -1);
	int cnt = 0;
	int tmp = n;
	while(n) {
		bit[++cnt] = n%10;
		n /= 10;
	}
	return tmp-dfs(cnt, 1, 1);
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n, m;
	while(cin >> n >> m && n+m) {
		cout << solve(m)-solve(n-1) << endl;
	}
	return 0;
}