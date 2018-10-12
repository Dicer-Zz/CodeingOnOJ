#include <bits/stdc++.h>
using namespace std;
char mp[55][55];
bool vis[55][55];
int n,m,sx,sy,flag;
bool check(char ch,int x,int y){
	if(mp[x][y] == ch && x>=0 && x<n && y>=0 && y<m)	return 1;
	else return 0;
}
int d[4][2] = {0,1,0,-1,1,0,-1,0};
void dfs(int x,int y,int step){
	int dx,dy;
	// printf("%d %d\n",x,y );
	for(int i=0;i<4;++i){
		dx = x + d[i][0];
		dy = y + d[i][1];
		if(check(mp[x][y],dx,dy)){
			if(!vis[dx][dy]){
				vis[dx][dy] = 1;
				dfs(dx,dy,step+1);
			}
			else if(step>=4 && dx == sx && dy == sy){
				flag = 1;
				return;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	while(scanf("%d %d",&n,&m) != EOF){
		memset(vis,0,sizeof(vis));
		flag = 0;
		for(int i=0;i<n;++i)	scanf("%s",mp[i]);
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				sx = i;sy = j;
				if(!vis[sx][sy]){
					vis[sx][sy] = 1;
					dfs(sx,sy,1);
				}
				if(flag)	break;
			}
			if(flag)	break;
		}
		if(flag) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}