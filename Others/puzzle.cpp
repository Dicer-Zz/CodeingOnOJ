#include<stdio.h>

int main(){
	int n;
	int a[5][5];
	while(~scanf("%d",&n) && n){
		if(n > 2){
			printf("YES\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					scanf("%d",&a[i][j]);
				}
			}
			continue;
		}
		else{
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					scanf("%d",&a[i][j]);
				}
			}
			if(a[0][0] == 1 && a[0][1] == 2 && a[1][0] == 3)
			printf("YES\n");
			else if(a[0][0] == 3 && a[0][1] == 1 && a[1][0] == 2)
			printf("YES\n");
			else if(a[0][0] == 2 && a[0][1] == 3 && a[1][0] == 1)
			printf("YES\n");
			else 
			printf("NO\n");
		}
	}
	return 0;
}
