#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct scl{
	int cost;
	double p;
}s[11000];
double dp[11000];
bool cmp(scl a,scl b){  
	if(a.p == b.p)	return a.cost < b.cost;
	return a.p < b.p;
}
int main(){
	int v,n;
	while(scanf("%d %d",&v,&n) && v+n){
		for(int i=1;i<=n;++i){
			scanf("%d %lf",&s[i].cost,&s[i].p);
			s[i].p = 1 - s[i].p;
		}
		for(int i=0;i<=v;++i)	dp[i] = 1;
		sort(s+1,s+1+n,cmp);
		for(int i=1;i<=n;++i){
			for(int j=v;j>=s[i].cost;--j){
				dp[j] = min(dp[j],dp[j-s[i].cost] * s[i].p);
			}
		}
		double ans = (1-dp[v])*100.0;
		printf("%.1lf%%\n",ans);
	}
	return 0;
}
