#include<stdio.h>
#include<algorithm>
#include<math.h>
#define maxn 1005
#define inf 0x3f3f3f3f
using namespace std;

int  a[maxn];
int dp[maxn];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		dp[i] = inf;
	}
	for(int i=0;i<n;i++){
		*lower_bound(dp,dp+n,a[i]) = a[i];
		/*for(int j=0;j<n;j++)
			printf("%d ",dp[j]);
		printf("\n");*/				
	}
	printf("%d\n",lower_bound(dp,dp+n,inf) - dp);
	return 0;
}
