#include<stdio.h>
#include<time.h>
const int MOD = 1000000;
int fac(int a){
	int b=1;
	for(int i=1;i<=a;i++)
	b = b*i%MOD;
	return b; 
}
int main()
{
	int a,sum=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	sum = sum + fac(i) % MOD;
	printf("%d\n",sum%MOD);
	printf("Time used = %.2f\n",(double)clock() / CLOCKS_PER_SEC);
	return 0;
}
