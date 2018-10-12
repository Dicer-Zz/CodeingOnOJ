#include<stdio.h>

int pre[1005];

int find(int x){
	int r = x;
	while(pre[r] != r){
		r = pre[r];
	}					//search root  
	int i=x,j;
	while(i != r){
		j = pre[i];
		pre[i] = r;
		i = j;
	}					//Â·¾¶Ñ¹Ëõ 
	return r;
}

void join(int x,int y,int total){
	int fx = find(x),fy = find(y);
	if(fx != fy){
		pre[fx] = fy;
		total--;
	}
}

int main(){
	int n,m;
	while(~scanf("%d %d",&n,&m) && n){
		int total = n - 1;   // need n path in the begin
		for(int i=0;i<n;i++)
		pre[i] = i;
		for(int i=0;i<m;i++){
			int x,y;
			scanf("%d %d",&x,&y);
			join(x,y,total);
		}
		printf("%d\n",total);
	}
	return 0;
}
