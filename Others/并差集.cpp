#include <stdio.h>
int pre[1005];
int find(int x){
	int r=x;
	while(pre[r] != r)
	r = pre[r];
	int i=x,j;
	while(i!=r){
		j = pre[i];
		pre[i] = r; 
		i = j;
	}
	return r;
}

int main(){
	int n,m,p1,p2,total,f1,f2;
	while(scanf("%d",&n)&&n){
		total = n-1;
		scanf("%d",&m);
		for(int i=1;i<=n;i++)
		pre[i] = i;
		while(m--){
			scanf("%d %d",&p1,&p2);
			f1 = find(p1);
			f2 = find(p2);
			 if(f1 != f2){
			 	pre[f2] = f1;
			 	total--;
			 }
		}
		printf("%d\n",total);
	}
	return 0;
}
