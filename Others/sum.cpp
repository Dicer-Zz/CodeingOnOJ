#include<stdio.h>
int main()
{
	int n,sum,k=2;
	while(scanf("%d",&n),n){
		sum=0;
		for(int i=1;k!=i;i++){
			for(int j=k-1;j<=2*i-1;j++){
				sum +=i	;
				k=j+1;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
