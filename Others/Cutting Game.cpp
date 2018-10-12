#include<stdio.h>

int main(){
	int t,m,total;
	int kase = 1;
	scanf("%d",&t);
	while(t--){
		total = 0;
		scanf("%d",&m);
		printf("Case %d: ",kase++);
		while(m > 0){
			total++;
			m /= 2;
		}
		printf("%d\n",total);
	}
	return 0;
} 
