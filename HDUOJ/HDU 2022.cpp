/*HDU 2022 海选女主角*/ 

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,m,ans,a,pi,pj;
	while(~scanf("%d%d",&n,&m)){
		ans = 0,pi = 1,pj = 1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				scanf("%d",&a);
				if(abs(a) > abs(ans)){
					ans = a;
					pi = i;
					pj = j;
				}
			}
		}
		printf("%d %d %d\n",pi,pj,ans);
	}
	return 0;
} 
