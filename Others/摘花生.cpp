#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct nuts{
	int x,y,num;
}nut[3000];

int map[55][55];
bool cmp(nuts x,nuts y){
	return x.num > y.num;
}

int main(){
	int T;
	int n,m,s,total;
	scanf("%d",&T);
	while(T--){
		memset(nut,0,sizeof(nut));
		total = 0;
		scanf("%d %d %d",&n,&m,&s);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&map[i][j]);
				if(map[i][j] != 0){			//存花生点 
					nut[total].x = i;
					nut[total].y = j;
					nut[total].num = map[i][j];
					total++;
				}
			}
		}
		sort(nut,nut+total,cmp);		//花生数量排序 
		int x,y,sum = 0;		//当前坐标和花生总量 
		for(int i=0;i<total;i++){
			if(sum == 0){		//First 
				x = nut[i].x;
				y = nut[i].y;
				if(s >= 2*x+1){		//来回加摘取时间 
					sum = nut[i].num;
					s -= x+1;
				}
				else break;
			}
			else{
				if(s >= abs(x-nut[i].x)+abs(y-nut[i].y)+nut[i].x+1){
					sum += nut[i].num;
					s -= abs(x-nut[i].x)+abs(y-nut[i].y)+1;
					x = nut[i].x;
					y = nut[i].y;
				}
				else break;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
