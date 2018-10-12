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

int dp[15][15][3], s[15];
int dfs(int pos, int mod, int have, int lim) {
	if(pos <= 0)
		return mod == 0 && have == 2;
	if(!lim && dp[pos][mod][have] != -1)	return dp[pos][mod][have];
	int ans = 0, modx, havex, num;
	num = lim?s[pos]:9;
	for(int i=0; i<=num; ++i) {
		modx = (mod*10+i)%13;
		havex = have;
		if(have == 0 && i == 1)	havex = 1;
		if(have == 1 && i != 1)	havex = 0;
		if(have == 1 && i == 3)	havex = 2;
		ans += dfs(pos-1, modx, havex, lim&&i==num);
	}
	if(!lim)	dp[pos][mod][have] = ans;
	return ans;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	while(cin >> n){
		clr(s, 0);
		clr(dp, -1);
		int cnt = 0;
		while(n) {
			s[++cnt] = n%10;
			n /= 10;
		}
		cout << dfs(cnt, 0, 0, 1) << endl;
	}
	return 0;
}