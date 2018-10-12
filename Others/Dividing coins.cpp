#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int T,n,mmax,a[110],dp[55000];
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		mmax = 0;
		for(int i=1;i<=n;++i){
			scanf("%d",&a[i]);
			mmax += a[i];
		}
		memset(dp,0,sizeof(dp));
		int v = mmax/2;
		for(int i=1;i<=n;++i)
			for(int j=v;j>=a[i];--j)
				dp[j] = max(dp[j],dp[j - a[i]] + a[i]);
		printf("%d\n",mmax - 2*dp[v]);
	}
	return 0;
}
