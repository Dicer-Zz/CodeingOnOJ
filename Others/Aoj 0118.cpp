/*AOJ 0118 ÇøÓò¸öÊı DFS*/ 

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

const int maxn=25;
int n,m;
int dx[] = {1,0,0,-1};
int dy[] = {0,1,-1,0};
char  map[maxn][maxn];
int visit[maxn][maxn];
int total;

bool judge(int x,int y){
	if(x>=1&&x<=n&&y>=1&&y<=m)
		return true;
	return false;
} 

void dfs(int x,int y){
	for(int i=0;i<4;i++){
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if(!visit[nextx][nexty]&&judge(nextx,nexty)&&map[nextx][nexty]==map[x][y]){
			visit[nextx][nexty] = 1;
			dfs(nextx,nexty);
		
		}
	}
}


int main(void){
	while(~scanf("%d %d",&n,&m)){
		if(n+m==0)	break;
		total = 1;
		for(int i=1;i<=n;i++){
			getchar();
			for(int j=1;j<=m;j++){
				visit[i][j] = 0;
				scanf("%c",&map[i][j]);
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(!visit[i][j]){
					visit[i][j] = 1;
					total++;
					dfs(i,j);
				}
			}
		}
		cout<<total-1<<endl; 
	}	
	return 0;
}
