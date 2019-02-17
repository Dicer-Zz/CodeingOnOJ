/*---------------------------------

 @Author:   Dicer
 @DateTime: 2019-02-15 17:52:24

---------------------------------*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
inline ll qpow(ll a,ll b,ll mod){ll res=1;while(b){if(b&1)res = (res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 100 + 7;

int w[MAXN][MAXN], dp[MAXN][MAXN], pre[MAXN][MAXN];

void print(int i, int j){
	if(i == 0)	return;
	print(i-1, pre[i][j]);
	printf("%d ", j);
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	int n, m;
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin >> w[i][j];
		}
	}
	for(int i=1;i<=m;++i)	dp[1][i] = w[1][i];
	for(int i=2;i<=n;++i){
		int mmax = 0;
		for(int j=i;j<=m;++j){
			for(int k=i-1;k<j;++k){
				if(mmax < dp[i-1][k] + w[i][j]){
					mmax = dp[i-1][k] + w[i][j];
					pre[i][j] = k;
				}
			}
			dp[i][j] = mmax;
		}
	}
	int flag = n;
	for(int i=n;i<=m;++i){
		if(dp[n][flag] < dp[n][i])	flag = i;
	}
	cout << dp[n][flag] << endl;
	print(n, flag);
	return 0;
}