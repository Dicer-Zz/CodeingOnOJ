#include<stdio.h>

int main(){
	int n;
	while(~scanf("%d",&n) && n){
		int b = n-1 ;
		int a = 1;
		for(int i=0;i<n;i++){
			for(int j=0;j<b;j++)
			printf(" ");
			for(int k=0;k<a;k++)
			printf("*");
			printf("\n");
			b--;
			a += 2;
		}
	}
	return 0;
} 
