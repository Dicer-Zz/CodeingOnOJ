#include<stdio.h>
int gcd(int a,int b)
{
	return b>0?gcd(b,a%b):a; 
 } 
int main()
{
	long long a,b;
	scanf("%d%d",&a,&b);
	printf("%lld\n",a*b/gcd(a,b));
	return 0;
}
