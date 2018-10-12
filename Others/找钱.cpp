#include<stdio.h>

int main(){
	int n,m,p,c;
	while(~scanf("%d %d %d %d",&n,&m,&p,&c) && n+m+p+c){
		printf("%d\n",p-(m-n));
	}
	return 0;
} 
