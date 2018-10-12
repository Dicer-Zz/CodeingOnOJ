/* HDU 1003 Max Sum --æ≠µ‰DP*/

#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int  a[150000];
int dp[150000];
int main(){
    int T,n,begin,end,ans;
    int kase = 1;
    scanf("%d",&T);
    while(T--){
    	begin = end = 1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
        dp[1] = a[1];
        ans = a[1];
        for(int i=2;i<=n;i++){
        	//dp[i] = max(dp[i-1]+a[i],a[i]);
			if(dp[i-1] >= 0){
				dp[i] = dp[i-1] + a[i];
				if(ans <= dp[i]){
					end = i;
					ans = dp[i];
				}
			}
			else{
				dp[i] = a[i];
				if(ans <= dp[i]){
					begin = i;
					end = i;
					ans = dp[i];
				}
			}
		}
		printf("Case %d:\n",kase++);
		printf("%d %d %d\n\n",ans,begin,end);
    }
    return 0;
}
