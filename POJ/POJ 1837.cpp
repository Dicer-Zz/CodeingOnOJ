#include <iostream>
#include <stdio.h>
#include <string.h>
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

int dp[23][15100];
int c[23], g[23];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; ++i) cin >> c[i];
	for(int i=1; i<=m; ++i) cin >> g[i];
	clr(dp, 0);
	dp[0][7500] = 1;
	for(int i=1; i<=m; ++i) {
		for(int j=0; j<=15000; ++j) {
			if(dp[i-1][j]){
				for(int k=1; k<=n; ++k){
					dp[i][j+g[i]*c[k]] += dp[i-1][j];
				}
			}
		}
	}
	printf("%d\n", dp[m][7500]);
	return 0;
}