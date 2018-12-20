#include<stdio.h>
int main()
{
	int n,i,j,a=0;
	scanf("%d",&n);
	for(i=1;i<=10e3;i++){
		for(j=i;j<=10e3;j++){
			if(n==i*i+j*j){
				a=i;
				printf("%d %d\n",i,j);
			}
		}
	}
	if(a==0)
	printf("No Solution\n");
	return 0;
}
