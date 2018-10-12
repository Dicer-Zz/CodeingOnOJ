#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
const int maxn=110000;
int city[maxn];
struct road{
	int cost;
};
int main(){
	int n,m;
	int i,j,cost;
	int s,e;
	road r[maxn][maxn];
	int c1,c2,rr;
	while(~scanf("%d",&n)){
		scanf("%d",&m);
		memset(r,0,sizeof(r));
		for(int i=1;i<=n;i++){
			city[i] = i;
		}
		for(int i=1;i<=m;i++){		//road
			scanf("%d %d %d",&c1,&c2,&rr);
			if(c1 > c2){		//let c1 < c2
				c1 ^= c2;
				c2 ^= c1;
				cq ^= c2; 
			}
			
			
		} 
	}
	return 0;
}
