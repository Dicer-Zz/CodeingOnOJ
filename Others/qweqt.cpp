#include<stdio.h>
int main()
{
	int T,n,m,sum;
	scanf("%d",&T);
	while(T--){
		sum = 0;
		int i=0,j=0,k=0;
		scanf("%d%d",&n,&m);
		for(;i<=m;i++){
			for(;j*2<=m;j++){
				for(;k*3<=m;k++){
					if(i+2*j+3*k == m){
						sum ++;
						break;
					}
					k=0;
				}
				k=0;
				j=0;
			}
		}
		printf("%d\n",sum%1000000007);
	}
	return 0;
}
