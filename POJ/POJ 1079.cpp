/*POJ 1979 Red and Black DFS */ 
#include<bits/stdc++.h>
using namespace std;
const int maxn = 30;

char Map[maxn][maxn];
int step[maxn][maxn];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n,m;

bool judge(int x,int y){
	if(x>=1&&x<=n&&y>=1&&y<=m)
		return true;
	return false;
}

int dfs(int x,int y){
	if(step[x][y])	return step[x][y];
	for(int i=0;i<4;i++){
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if(judge(nextx,nexty) && Map[nextx][nexty]=='.'){		//可以移动 
			int temp = dfs(nextx,nexty) + 1;
			if(temp>step[x][y]){
				step[x][y] = temp;
			}
		}
	}
	return step[x][y];
}
int main(void){
	while(cin>>m>>n){
		if(n+m==0)	break;
		memset(step,0,sizeof(step));
		int pi = 0,pj = 0;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			cin>>Map[i][j];
			if(Map[i][j]=='@'){		//起点 
				pi = i;pj = j;
			}
		}
		cout<<dfs(pi,pj)<<endl;
	}
	return 0;
}
