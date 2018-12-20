#include<bits/stdc++.h>

int main(){
	int t,n,flag;
	scanf("%d",&t);
	while(t--){
		flag = 1;
		scanf("%d",&n);
		if(n<=2){
			printf("NO\n");
			continue;
		}
		for(int i=0;i*7<n;i++){
			for(int j=1;3*j+7*i <= n;j++){
				if(3*j+7*i == n){
					printf("YES\n");
					flag = 0;
					break;
				}
				if(flag == 0)
				break;
			}
		}
		if(flag == 1)
		printf("NO\n");
	}
	return 0;
}
