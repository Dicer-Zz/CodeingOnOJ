#include<stdio.h>
#include<string.h>

int main(){
	int n;
	int a[40][40];
	memset(a,0,sizeof(a));
	for(int i=1;i<35;i++){
		for(int j=1;j<35;j++){
			if(i==j)
				a[i][j] = 1;
			else if(j==1)
				a[i][j] = 1;
			else{
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
		}
	}
	while(~scanf("%d",&n)){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j])
					printf("%d%c",a[i][j],j==i?'\n':' ');
			}
		} 
	} 
	return 0;
}
