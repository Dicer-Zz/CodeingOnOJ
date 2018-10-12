#include<stdio.h> 

int main(){
	int m,n;
	while(~scanf("%d %d",&m,&n)){
		int a = 0,b;
		int flag = 0;
		for(int i=m;i<=n;i++){
			a = 0;
			m = i;
			b = m / 100;
			a += b*b*b;
			m %= 100;
			b = m / 10;
			a += b*b*b;
			m %= 10;
			a += m*m*m;
			if(a == i){
				if(!flag){
					flag = 1;
					printf("%d",a);
				}
				else
					printf(" %d",a);
			}
		}
		if(!flag)
		printf("no\n");
		else
		printf("\n");
	}
	return 0;
}
