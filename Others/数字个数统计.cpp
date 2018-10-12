#include<stdio.h>

int main(){
	int n,sum;
	char ch;
	scanf("%d",&n);
	getchar();
	while(n--){
		sum = 0;
		while(scanf("%c",&ch) && ch !='\n'){
			if(ch >= '0' && ch <= '9')
				sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
} 
