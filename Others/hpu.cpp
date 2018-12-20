#include<stdio.h>
int main()
{
	int n,k,x,y;
	scanf("%d",&n);
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d %d",&x,&y);
		n = n-y+x-1;
	}
	printf("%d",2*n);
	return 0;
} 
