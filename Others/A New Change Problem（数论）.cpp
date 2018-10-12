#include<stdio.h>

int main(){
	int m,n;
	while(~scanf("%d %d",&m,&n))
	{
		printf("%d %d\n",m*n-m-n,(m-1)*(n-1)/2);
	}
	return 0;
}
