#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--){
		int a,b,sum;
		scanf("%d %d",&a,&b);
		a=a%100;
		b=b%100;
		sum=a+b;
		sum%=100;
		printf("%d\n",sum);
	}return 0; 
 } 
