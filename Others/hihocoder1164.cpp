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
const int MAXN = 1e3;
const int MAXM = 1e5;

double dp[MAXN];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	dp[0] = 1;
	for(int i=1; i<=n; ++i){
		dp[i] = 0;
		for(int j=0; j<i; ++j){
			for(int k=0; k<i; ++k){
				dp[i] += 1.0*(dp[j]+dp[k])/(i*i);
			}
		}
		// printf("%.10lf\n", dp[i]);
	}
	printf("%.10lf\n", dp[n]);
	return 0;
}