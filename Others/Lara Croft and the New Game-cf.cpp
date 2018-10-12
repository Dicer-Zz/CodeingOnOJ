#include<stdio.h>

int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int x=n,y=m;
	if(k <= n+m-2){
		if(k <= n-1){
			printf("%d 1\n",k+1);
		}
		if(k >= n){
			printf("%d %d\n",n,k-n+2);
		}
	}
	else{
		k -= n+m-2;
		while(k){
			x--;
			k--;
			if(k==0){
				printf("%d %d\n",x+1,y+1);
				break;
			}
			while(y>1 && k){
				y--;
				k--;
				if(k==0){
				printf("%d %d\n",x,y);
				break;
				}
			}
			x--;
			k--;
			if(k==0){
				printf("%d %d\n",x+1,y+1);
				break;
			}
			while(y>1 && k){
				y++;
				k--;
				if(k==0){
				printf("%d %d\n",x,y);
				break;
				}
			}
		}
	}
	return 0;
}
