#include <stdio.h>
#include <iostream>
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

int a[35], dp[35][35];
void init();
int solve(int n);	
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	init();
	int n, m;
	cin >> n >> m;
	printf("%d\n", solve(m)-solve(n-1));
	return 0;
}

void init(){
	for(int i=0; i<33; ++i) {
		dp[i][0] = 1; dp[i][i] = 1;
		for(int j=1; j<i; ++j) {
			dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
		}
	}
}
int solve(int n) {
	int cnt = 0;
	while(n) {
		a[++cnt] = (n&1);
		n >>= 1;
	}
	// printf("%d ", cnt);
	// for(int i=cnt; i>=1; --i)	printf("%d ", a[i]);
	// puts("");
	int ans = 1;
	for(int i=cnt-1; i>=1; --i) {
		for(int j=0; j+1 <= i/2; ++j) {
			ans += dp[i-1][j];
		}
	}
	int tot1 = 1, tot0 = 0;
	for(int i=cnt-1; i>=1; --i) {
		if(a[i] & 1) {
			tot0++;
			for(int j=0; j <= i-1 && j+tot1 <= tot0+(i-j-1); ++j) {
				ans += dp[i-1][j];
			}
			tot0--;	
			tot1++;
		}	else tot0++;
	}
	if(tot0 >= tot1)	ans++;
	// printf("%d\n", ans);
	return ans;
}