#include<stdio.h>
#define maxn 100000005
int a[maxn];
int main()
{
	int n=0,x;
	while(scanf("%d",&x) == 1)
	a[n++] = x;
	for(int i=n-1;i>=1;i--)
	printf("%d ",a[i]);
	printf("%d\n",a[0]); 
	return 0;
}

