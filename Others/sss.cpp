#include<stdio.h>
#include<math.h>
int s[1005];
int gcd(int a,int b){
	return b>0?gcd(b,a%b):a;
}
int main()
{
	printf("%d",abs(-4));
	return 0;
}
	
