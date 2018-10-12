/*HDU 2544 最短路 */ 
#include<bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f,N=120;
int dis[N],w[N][N],visit[N],n,m;	

void Dijkstra(int a){
	int pos,min;
	for(int i=1;i<=n;i++){		//初始化 
		dis[i] = w[1][i];visit[i] = 0;
	}
	visit[a] = 1;
	for(int i=1;i<=n;i++){
		min = inf;
		for(int j=1;j<=n;j++){
			if(!visit[j] && dis[j]<min){
				pos = j;
				min = dis[j];
			}
		}
		visit[pos] = 1;
		for(int j=1;j<=n;j++){
			if(!visit[j] && (dis[pos]+w[pos][j]) < dis[j]){
				dis[j] = dis[pos]+w[pos][j];
			}
		}
	}
} 

int main(void){
	int a,b,c;
	while(~scanf("%d %d",&n,&m) && n+m){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				w[i][j] = inf;
			}
		}
		for(int i=1;i<=m;i++){
			scanf("%d %d %d",&a,&b,&c);
			w[a][b] = w[b][a] = c;
		}
		Dijkstra(1);
		printf("%d\n",dis[n]);
	}
	return 0;
} 
