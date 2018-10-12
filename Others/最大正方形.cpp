#include<bits/stdc++.h>
using namespace std;
const int maxn = 2502;
int dp[2][maxn],mp[maxn][maxn],ud[maxn][maxn],lr[maxn][maxn];
int main(){
	int n,m,ans = 0;
	while(scanf("%d %d",&n,&m) != EOF){
		memset(lr,0,sizeof(lr));
		memset(ud,0,sizeof(ud));
		memset(dp,0,sizeof(dp));
		ans = 0;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				scanf("%d",&mp[i][j]);
				if(!mp[i][j]){
					ud[i][j] = ud[i-1][j] + 1;
					lr[i][j] = lr[i][j-1] + 1;
				}
				else dp[i&1][j] = min(dp[~i&1][j-1],min(ud[i-1][j],lr[i][j-1])) + 1;
				ans = max(ans,dp[i&1][j]);
			}
		}
//		printf("%d\n",ans);
		memset(lr,0,sizeof(lr));
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;++i){
			for(int j=m;j>=1;--j){
				if(!mp[i][j]){
					lr[i][j] = lr[i][j+1] + 1; 
				}
				else	dp[i&1][j] = min(dp[~i&1][j+1],min(ud[i-1][j],lr[i][j+1])) + 1;
				ans = max(ans,dp[i&1][j]); 
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
