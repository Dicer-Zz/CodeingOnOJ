#include<stdio.h>
#define maxn 100010

int pre[maxn];

int find_flag(int x,int y){
	int flag = 0;
	while(pre[x] != x){
		x = pre[x];
		flag++;
		if(pre[x] == y){
			flag++;	
			break;
		}
	} 
	return flag;
}

int find(int x,int y){
	int flag = 0;
	while(pre[x] != x){
		x = pre[x];
		if(pre[x] == y)
			flag = 1;
	} 
	return flag;
}

int main(){
	int t;
	int m,n;
	char flag;
	int p1,p2;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		for(int i=1;i<=n;i++)
		pre[i] = i;
		while(m--){
			getchar();
			scanf("%c %d %d",&flag,&p1,&p2);
			if(p1 > p2){
				int r = p1;
				p1 = p2;
				p2 = r;
			} 
			if(flag == 'A'){
				if(find(p1,p2)){
					if((find_flag(p1,p2) % 2) == 1)
						printf("Belong to different group.\n");
					else
						printf("Belong to same group.\n"); 
				}
				else
					printf("Not sure yet.\n");
			}
			else{
				pre[p1] = p2;
			}
		}
	}
	return 0;
} 
