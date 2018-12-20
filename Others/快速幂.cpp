#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b),a*b){
		c=1;
		for(int i=0;i<b;i++){
			a %= 100;
			c *= a;
		}
		c %= 1000;
		printf("%d\n",c);
	}
	return 0;
}
