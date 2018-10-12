#include<stdio.h>
int pre[50000+5];
int find(int x){
	int r=x;
	while(pre[r] != r)
	r = pre[r];
	int i=x,j;
	while(i != r){
		j = pre[i];
		pre[i] = r;
		i = j;
	}
	return r;
}
int main(){
	int n,k,total,p1,p2,flag;
	while(scanf("%d%d",&n,&k)==2){
		for(int i=1;i<=n;i++)
		pre[i] = i;
		while(k--){
			scanf("%d%d%d",&flag,&p1,&p2);
			if(p1>n || p2>n)  //p1,p2 are less than n
			continue;
			if(flag==1){			// p1,p2 of the same kind 				
				if(find(p1) != find(p2)){
					find(p1) = find(p2);
				};
			}
			else if(flag==2){                  //p1 eat p2
				if(p1!=p2){
						
					;	
				}
			}	
		} 
	}
	return 0;
}
