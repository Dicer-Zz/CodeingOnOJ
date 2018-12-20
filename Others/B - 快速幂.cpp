#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b),a*b){
		for(int i=0;i<b;i++){
			c *= a;
		}
		c %= 1000;
		printf("%d",c);
	}
	return 0;
}
