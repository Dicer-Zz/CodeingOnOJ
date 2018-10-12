#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
inline int read(){int r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll readll(){ll r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1e3+15;
const int MAXM = 1e5;

double dp[MAXN][MAXN];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int w, b;
	cin >> w >> b;
	for(int i=0; i<=w; ++i){
		for(int j=0; j<=b;++j){
			if(i == 0)	{dp[i][j] = 0; continue;}
			if(j == 0)	{dp[i][j] = 1.0; continue;}
			dp[i][j] = 1.0*i/(i+j);
			if(j>=2)	dp[i][j] +=	(1.0*j/(i+j))*(j-1)/(i+j-1)*i/(i+j-2)*dp[i-1][j-2];
			if(j>=3)	dp[i][j] += (1.0*j/(i+j))*(j-1)/(i+j-1)*(j-2)/(i+j-2)*dp[i][j-3];
		}
	}
	printf("%.9lf\n", dp[w][b]);
	return 0;
}