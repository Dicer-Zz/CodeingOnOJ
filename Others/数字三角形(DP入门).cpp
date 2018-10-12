#include<stdio.h>
#include<string.h> 
#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;
const int maxn=1e3;
int a[maxn][maxn];
int dp[maxn][maxn];

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			cin >> a[i][j];
	memset(dp,0,sizeof(dp)); 
	for(int i=0;i<n;i++)		//Ä©ÐÐ³õÊ¼»¯ 
		dp[n-1][i] = a[n-1][i];
	for(int i=n-2;i>=0;i--)
		for(int j=0;j<=i;j++){
			dp[i][j] = max(dp[i+1][j],dp[i+1][j+1]) + a[i][j];
		}
	printf("%d\n",dp[0][0]);
	return 0;
}
