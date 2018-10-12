#include<stdio.h>

int main(){
	int matrix[10][10];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&matrix[i][j]); 
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
				if(i > j){
					matrix[i][j] += matrix[j][i];
					matrix[j][i] = 0;
				}
		} 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d%c",matrix[i][j],j==n-1?'\n':' ');
		}
	}
	return 0;
} 
