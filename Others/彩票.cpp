#include<stdio.h>

int main(){
	int n,m;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		if(m <= 2){
			printf("No\n");
		}
		else{
			if(m % 2 == 0){
				printf("Yes\n");
			}
			else	printf("No\n");
		}
	}
	return 0;
}
