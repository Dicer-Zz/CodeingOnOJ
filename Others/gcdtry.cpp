#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	while(n){
		m %= n;
		n %= m;
	}
	printf("%d",n+m);
	return 0;
} 
