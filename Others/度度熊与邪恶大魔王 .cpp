#include<bits/stdc++.h>
using namespace std;

long long Godzilla[1010][12],dam[1010],cost[1010],dp[1010][12];		//dp表示i血j甲的怪最少需要的宝石数 
int main(){
	int n,m,x,y;
	while(~scanf("%d %d",&n,&m)){
		memset(Godzilla,0,sizeof(Godzilla));
		for(int i=1;i<=n;++i){
			scanf("%d %d",&x,&y);
			Godzilla[x][y]++;
		}
		for(int i=1;i<=m;++i){
			scanf("%d %d",&cost[i],&dam[i]);
		}
		memset(dp,0x3f,sizeof(dp));
		for(int i=1;i<=1000;++i){
			for(int j=0;j<=10;++j){
				for(int k=1;k<=m;++k){
					if(dam[k] <= j)	continue;		//未击穿敌方护甲
					if(dam[k] > j){
						if(dam[k] >= i+j)	dp[i][j] = min(dp[i][j],cost[k]);
						else dp[i][j] = min(dp[i][j],dp[i-dam[k]+j][j]+cost[k]); 
					}
				}
			}
		}
		long long  ans = 0;
		for(int i=1;i<=1000;++i){
			for(int j=0;j<=10;++j){
				ans += Godzilla[i][j] * dp[i][j];
			}
		}
		if(ans >= 0x3f3f3f3f)	puts("-1");
		else	printf("%lld\n",ans);
	}
	return 0;
}