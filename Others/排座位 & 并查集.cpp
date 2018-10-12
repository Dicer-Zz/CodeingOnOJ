#include<stdio.h>

int a[105],b[105][105] = {0}; //朋友关系用并查集，敌对关系用二维数组

int find(int x){
	while(x != a[x])
		x = find(a[x]);
	return a[x];
} 
void join(int x,int y){
	int fx = find(x); 
	int fy = find(y);
	if(fx != fy)
		a[fx] = fy; 
} 
int main(){
	int n,k,m;
	int p1,p2,r;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<=n;i++){
		a[i] = i;
	}
	while(m--){
		scanf("%d %d %d",&p1,&p2,&r);
		if(r == 1){
			join(p1,p2);		//好友 
		}
		else if(r == -1){
			b[p1][p2] = b[p2][p1] = r;		//敌人 
		}
	}	
	while(k--){
		scanf("%d %d",&p1,&p2);
		if(find(p1) == find(p2) && b[p1][p2] != -1 && b[p2][p1] != -1)
			//两位宾客之间是朋友，且没有敌对关系
			printf("No problem\n");
		else if(find(p1) != find(p2) && b[p1][p2] != -1 && b[p2][p1] != -1)
			//并不是朋友，但也不敌对
			printf("OK\n");
		else if(find(p1) == find(p2) && (b[p1][p2] == -1 || b[p2][p1] == -1))
			//他们之间有敌对，然而也有共同的朋友
			printf("OK but...\n");
		else if(find(p1) != find(p2) && (b[p1][p2] == -1 || b[p2][p1] == -1))
			//如果他们之间只有敌对关系
			printf("No way\n");
	}
	return 0;
} 
