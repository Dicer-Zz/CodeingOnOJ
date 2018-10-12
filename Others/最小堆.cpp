#include<stdio.h>

int max(int x,int y){
	if(x >= y)
		return x;
	else return y;
} 
int min(int x,int y){
	if(x <= y)
		return x;
	else return y;
}
struct node{
	int a;
	int power;
}tree[1050];
int main(){
	int t;
	int n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&tree[i].power);
			tree[i].a = i;
		}
		int x,y;
		for(int i=1;i<=n-1;i++){
			scanf("%d %d",&x,&y);
			tree[max(x,y)].a = min(x,y);
		}
		int flag = 1;
		for(int i=1;i<=n;i++){
			if(i != 1){
				if(tree[tree[i].a].power > tree[i].power)
					flag  = 0;
			}
		}
		if(flag == 1)	printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
