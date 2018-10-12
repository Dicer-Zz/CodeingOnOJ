#include<stdio.h>

int main(){
	int t;
	int n,m;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		int sum = (m * 3) / 2 - 1; 
		if(n >= sum)	printf("Yes\n");
		else	printf("No\n");
	}
	return 0;
}
