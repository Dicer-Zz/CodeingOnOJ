#include<stdio.h>
#include<string.h> 
#define maxn 1010
int s[maxn];

int main()
{
	int n,k,first=1;
	memset(s,0,sizeof(s));
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j % i == 0 )
			s[j] = !s[j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i])
		{
			if(first)
			first = 0;
			else
			printf(" ");
			printf("%d",i);
		}
	}
	printf("\n"); 
	return 0;
}
