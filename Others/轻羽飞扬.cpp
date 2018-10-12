#include <bits/stdc++.h>
using namespace std;
typedef pair<int ,int > pii;
int n,m,sx,sy;
char mp[1100][1100];
bool vis[1100][1100];
int d[4][2] = {0,1,0,-1,1,0,-1,0};
bool check(int x,int y){
	if(x >= 0 && x<n && y>=0 && y<m && mp[x][y] != '*')	return 1;
	else return 0;
}
struct node{
	int x,y,step;
}p,q;
int bfs(int x,int y,char ch){
	int dx,dy;
	queue<node> que;
	vis[x][y] = 1;
	p.x = x;p.y = y;p.step = 0;
	que.push(p);
	while(!que.empty()){
		q = que.front();
		que.pop();
		// printf("step: %d %d %d -->\n",q.step,q.x,q.y );
		if(mp[q.x][q.y] == ch){
			mp[q.x][q.y] = '.';
			sx = q.x;sy = q.y;
			return q.step;
		}
		for(int i=0;i<4;++i){
			dx = q.x + d[i][0];
			dy = q.y + d[i][1];
			if(check(dx,dy) && !vis[dx][dy]){
				if(ch == 'S' && mp[dx][dy] == 'T')	continue;
				vis[dx][dy] = 1;
				p.x = dx;p.y = dy;p.step = q.step + 1;
				que.push(p);
			}
		}
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;++i)	scanf("%s",mp[i]);
	scanf("%d %d",&sx,&sy);
	sx--;sy--;
	int d1,d2;
	memset(vis,0,sizeof(vis));
	d1 = bfs(sx,sy,'S');
	memset(vis,0,sizeof(vis));
	d2 = bfs(sx,sy,'T');
	if(d1 != -1 && d2 != -1)	printf("%d\n",d1+d2 );
	else printf("-1\n");
	return 0;
}