/*HDU 1026 Ignatius and the Princess I  bfs*/ 
#include<bits/stdc++.h>
using namespace std;

bool judge(int x,int y);
void bfs(int x,int y); 

char map[120][120];
bool visit[120][120];
int n,m;

int main(void){
	while(cin>>n>>m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>map[i][j];
				visit[i][j] = false;
			}
		}
		bfs(0,0);
	}
	return 0;
} 

void bfs(int x,int y){
	if(judge)
	
}

bool judge(int x,int y){
	if(x>=0 && x<=n && y>=0 && y<=n && map[x][y]!='X')
		return true;
	return false;
}
