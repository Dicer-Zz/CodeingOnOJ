#include<stdio.h>
#define INF 1000000000 
int main()
{
	int n,b=0,sum=0,max = INF,min = -INF;
	while(scanf("%d",&n)==1){
		sum+=n;
		if(n>max) max = n;
		if(n<min) min = n;
		b++;
	}
	printf("%d %d %.3f\n",max,min,(double)sum/n);
	return 0;
}
