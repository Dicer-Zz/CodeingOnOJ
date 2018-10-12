#include<stdio.h>
#include<string.h> 
#define maxn 35
int a[maxn][maxn];

int main(){
	memset(a,0,sizeof(a));
	int n = 0;
	for(int i=0;i<30;i++){
		for(int j=0;j<n+1;j++){
			if(j == 0)
			a[i][j] = 1;
			else if(j == n)
			a[i][j] = 1;
			else
			a[i][j] = a[i-1][j-1] + a[i-1][j];	
		}
		n++;
	}
	int m;
	while(~scanf("%d",&m)){
		n=0;
		int flag = 0;
		for(int i=0;i<m;i++){
		for(int j=0;j<n+1;j++){
			if(!flag){
				printf("%d",a[i][j]);
				flag = 1;
			}
			else
			printf(" %d",a[i][j]);
		}
		printf("\n");
		n++;
		flag=0;
		}
		printf("\n");
	} 
	return 0;
} 
			
