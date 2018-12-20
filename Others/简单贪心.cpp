#include<stdio.h>
int main()
{
	int n,x,a,b,c,d,e,f,s,sum=0;
	while(scanf("%d",&n),n){
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			a = x/100;
			x %= 100;
			b = x/50;
			x %= 50;
			c = x/10;
			x %= 10;
			d = x/5;
			x %= 5;
			e = x/2;
			x %= 2;
			f = x;
			s = a+b+c+d+e+f; 
			sum +=s;
		}
		printf("%d\n",sum);
	}
	return 0;
}
