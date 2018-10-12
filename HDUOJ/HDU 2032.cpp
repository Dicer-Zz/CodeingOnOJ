/*HDU 2032 Ñî»ÔÈı½Ç*/ 
#include<bits/stdc++.h>

int main(){
	int n;
	int a[35][35];
	for(int i=0;i<35;i++){
		for(int j=0;j<=i;j++){
			if(j==0 || i==j)	a[i][j] = 1;
			else	a[i][j] = a[i-1][j-1]+a[i-1][j];
			//printf("%d ",a[i][j]);
		}
		//printf("\n");
	}
	while(~scanf("%d",&n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				printf("%d%c",a[i][j],j==i?'\n':' ');
			}
		}
		printf("\n");
	}
	return 0;
} 
