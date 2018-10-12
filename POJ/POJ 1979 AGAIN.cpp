/*POJ 1979 Red and Black 再尝试*/ 
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

//定义
const int maxn = 30;
int n,m;
int visit[30][30];
char map[30][30];
int dx[] = {-1,1,0,0};
int dy[] = { 0,0,1,-1};

//是否为边界 
bool judge(int x,int y){
	if(x>=1&&x<=n&&y>=1&&y<=m)
		return true;
	return false;
} 

int dfs(int x,int y){
	int ans = 0;	 
	for(int i=0;i<4;i++){
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if(visit[nextx][nexty]) 	continue;		//已经访问
		visit[nextx][nexty] = 1;
		if(judge(nextx,nexty)&&map[nextx][nexty]=='.'){
			int temp = dfs(nextx,nexty);
			ans += temp + 1;	
		}
	}
	return ans;
}
int main(void){
	cin>>m>>n;
	int pi,pj;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>map[i][j];
			visit[i][j] = 0;
			if(map[i][j]=='@'){
				pi = i;
				pj = j;
			}
		}
	}
	printf("%d\n",dfs(pi,pj)+1);
	//查看访问情况 
	/*for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d ",visit[i][j]);
		}
		printf("\n");
	}*/
	return 0;
}   
