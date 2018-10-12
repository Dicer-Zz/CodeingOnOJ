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

ll dp[20][4], bit[20];
ll dfs(int pos, int cnt, int lim){
	if(cnt > 3)	return 0;
	if(pos <= 0)	return 1;
	if(!lim && dp[pos][cnt] != -1)	return dp[pos][cnt];
	ll ans = 0, num;
	num = lim?bit[pos]:9;
	for(int i=0; i<=num; ++i) {
		if(i == 0)	ans += dfs(pos-1, cnt, lim&&i==num);
		else	ans += dfs(pos-1, cnt+1, lim&&i==num);
	}
	if(!lim)	dp[pos][cnt] = ans;
	return ans;
}
ll solve(ll n) {
	clr(bit, 0);
	int cnt = 0;
	while(n) {
		bit[++cnt] = n%10;
		n /= 10;
	}
	return dfs(cnt, 0, 1);
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	clr(dp, -1);
	int T;
	cin >> T;
	while(T--) {
		ll n, m;
		cin >> n >> m;
		cout << solve(m)-solve(n-1) << endl;
	}	
	return 0;
}