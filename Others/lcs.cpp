#include<bits/stdc++.h>
using namespace std;
const int maxn = 1100;
int dp[maxn][maxn];
char a[maxn],b[maxn];
int main()
{
	scanf("%s %s",a+1,b+1);
	int n = strlen(a+1),m = strlen(b+1);
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(a[i] == b[j])	dp[i][j] = max(dp[i][j],dp[i-1][j-1]+1);
			else	dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
		}
	}
	printf("%d\n",abs(n-m)+n+m-2*dp[n][m]);
	return 0;
}
