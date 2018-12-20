#include<stdio.h>
int main()
{
	int T,n,m,a;
	long long x,y;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d",&n,&m,&a);
		x=n/a;
		y=m/a;
		if(n%a==0 && m%a==0)
		printf("%lld\n",x*y);
		else if(n%a==0)
		printf("%lld\n",x*(y+1));
		else if(m%a==0)
		printf("%lld\n",y*(x+1));
		else 
		printf("%lld\n",x*y+x+y+1);
	}
	return 0;
}
