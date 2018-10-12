#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f;
ll Godzilla[1010][12],dam[1010],cost[1010],dp[1010][12];		//dp表示i血j甲的怪需要的最少宝石数 
int main(){
	int n,m,x,y;
	while(~scanf("%d %d",&n,&m)){
		memset(Godzilla,0,sizeof(Godzilla));
		for(int i=1;i<=n;++i){
			scanf("%d %d",&x,&y);
			Godzilla[x][y]++;
		}
		for(int i=1;i<=m;++i){
			scanf("%lld %lld",&cost[i],&dam[i]);
		}
		memset(dp,INF,sizeof(dp));
		for(int i=1;i<1010;++i){
			for(int j=0;j<12;++j){
				for(int k=1;k<=m;++k){
					ll real = dam[k]-j;
					if(real <= 0)	continue;		//未击穿敌方护甲
					else{
						if(real >= i)	dp[i][j] = min(dp[i][j],cost[k]);
						else	dp[i][j] = min(dp[i][j],dp[i - real][j] + cost[k]);
					}	
				}
			}
		}
		ll ans = 0;
		for(int i=1;i<1010;++i){
			for(int j=0;j<12;++j){
				ans = ans + Godzilla[i][j] * dp[i][j];
			}
		}
		if(ans >= INF)	puts("-1");
		else	printf("%lld\n",ans);
	}
	return 0;
}
