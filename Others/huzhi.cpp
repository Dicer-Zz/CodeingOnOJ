#include<stdio.h>
int s[1005];
int gcd(int a,int b){
	return b>0?gcd(b,a%b):a;
}
int main()
{
	int t,n,a;
	scanf("%d",&t);
	while(t--)
	{
		a=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&s[i]);
		for(int i=0;i<n-1;i++)
		{
			if(gcd(s[i],s[i+1]) != 1)
			a++;
		}
		printf("%d\n",a);
	}
	return 0;
}
