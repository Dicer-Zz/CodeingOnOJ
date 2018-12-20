#include<stdio.h>
int main(){
	int T,n,m;
	double a,b,c;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&n,&m);
		if(m > n)
		printf("0\n");
		else{
			a=1,b=1;
			for(int i = 1;i<=n;i++)
			a *= i;	
			for(int i = 1;i<=m;i++)
			b *= i;
			c = a-b;
			if(c=0)
			c =1;
			else{
			c = 1;
			for(int i = 1;i<=n-m;i++)
			c *= i;}
			printf("%.0lf\n",a/b/c);
		}	
	} 
	return 0;
}
