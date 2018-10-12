#include <bits/stdc++.h>
using namespace std;
const int maxn = 30;
char mp[maxn][maxn];
int n,m;
long long dp[maxn][maxn];
long long ans;
int d[9][2] = {{-2,-1},{-1,-2},{1,-2},{2,-1},{-1,2},{-2,1},{1,2},{2,1},{0,0}};
bool isvalid(int a,int b){
	if(a>=0&&a<=n&&b>=0&&b<=m)	return 1;
	return 0;
}
void solve(int x,int y){
	ans = 0;
	for(int i=0;i<=n;++i)
		d[i][0] = 0; 
	for(int i=0;i<=m;++i)
		dp[0][i] = 0;
	for(int i=0;i<=n;++i)
		if(mp[i][0] != '#')	dp[i][0] = 1;
		else	break; 
	for(int i=0;i<=m;++i)
		if(mp[0][i] != '#')	dp[0][i] = 1;
		else	break;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(mp[i][j] != '#')	dp[i][j] = dp[i-1][j] + dp[i][j-1];
			else dp[i][j] = 0;
		}
	}
	ans = dp[n][m];
	printf("%lld\n",ans);
}
int main(int argc, char const *argv[])
{
	int x,y;
	cin>>n>>m>>x>>y;
	/*make a map*/
	for(int i=0;i<=n;++i)
		for(int j=0;j<=m;++j)
			mp[i][j] = '.';
	mp[n][m] = '*';
	int dx,dy;
	for(int i=0;i<9;++i){		
		dx = x + d[i][0];
		dy = y + d[i][1];
		if(isvalid(dx,dy))	mp[dx][dy] = '#';
	}
	/*map is finished*/
	solve(0,0);
	return 0;
}