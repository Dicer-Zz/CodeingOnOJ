#include<stdio.h>
int main()
{
	int n;
	long long x,y;
	while(scanf("%d",&n),n+1){
		x=1,y=0;
		for(int i=0;i<n;i++){
			x=3*x+2*y;
			y=(x+y)/3;
		}
		printf("%lld, %lld\n",x,y);
	}
	return 0;
}
