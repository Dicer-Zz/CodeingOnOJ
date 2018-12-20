#include<stdio.h>
int gcd(int a,int b){
	return b>0?gcd(b,a%b):a;
}
int main()
{
	int n,a,b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		for(int i=b+1;;i++){
			if(gcd(i,a) == b){
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
 } 
