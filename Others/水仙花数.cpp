#include<stdio.h>

int main(){
	int n,m,flag,sum,bit;
	while(~scanf("%d %d",&n,&m)){
		flag = 0;
		for(int i=n;i<=m;i++){
			int x=i;
			sum = 0;
			while(x>0){
				bit = x % 10;
				x /= 10;
				sum += bit*bit*bit;
			}
			if(sum == i){
				if(flag == 0){
					printf("%d",i);
					flag = 1;
				}
				else{
					printf(" %d",i);
				}
			}
		}
		if(flag == 0){
			printf("no\n");
		}
		else{
			printf("\n");
		}
	}
	return 0;
} 
