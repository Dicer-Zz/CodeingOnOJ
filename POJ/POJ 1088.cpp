#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
const int maxn = 150;
int map[maxn][maxn];
int step[maxn][maxn];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int n,m;

bool judge(int x,int y){
	if(x>=1&&x<=n&&y>=1&&y<=m)
		return true;
	return false;
}

int dfs(int x,int y){	//当前位置所能到达的最大距离  
	if(step[x][y])	
		return step[x][y];
	for(int i=0;i<4;i++){
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if(judge(nextx,nexty) && map[nextx][nexty]<map[x][y]){
			int temp = dfs(nextx,nexty) + 1;
			if(temp>step[x][y])	step[x][y] = temp;
		}
	}
	return step[x][y];
}

int main(void){
	cin>>n>>m;
	memset(step,0,sizeof(step));
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++){
		cin>>map[i][j];
		//cout<<step[i][j]<<' '; 
		} 
	int ans = 0;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++){
		//cout<<"step[i][j]:"<<step[i][j]<<' '; 	 
		step[i][j] = dfs(i,j);
		if(step[i][j]>ans)	ans = step[i][j];
	}
	cout<<ans+1<<endl;
	return 0;
}
