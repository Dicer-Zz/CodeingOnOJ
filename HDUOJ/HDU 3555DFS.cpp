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

ll dp[23][3], bit[23];
ll dfs(int pos, int have, int lim) {
	// printf("%d\n", have);
	if(pos <= 0)	return have == 2;
	if(!lim && dp[pos][have] != -1)	return dp[pos][have];
	ll ans = 0, num, hx;
	num = lim?bit[pos]:9;
	for(int i=0; i<=num; ++i) {
		hx = have;
		if(have == 0 && i == 4)	hx = 1;
		if(have == 1 && i != 4)	hx = 0;
		if(have == 1 && i == 9)	hx = 2;
		ans += dfs(pos-1, hx, lim&&i==num);
	}
	if(!lim)	dp[pos][have] = ans;
	return ans;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while(T--) {
		clr(bit, 0);
		clr(dp, -1);
		ll n;
		cin >> n;
		int cnt = 0;
		while(n) {
			bit[++cnt] = n%10;
			n /= 10;
		}
		cout << dfs(cnt, 0, 1) << endl;
	}
	return 0;
}