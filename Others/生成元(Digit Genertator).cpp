#include<stdio.h>
#include<string.h>
#define maxn 1010
int ans[maxn];

int  main()
{
	int T,n;
	memset(ans,0,sizeof(ans));
	for(int i=1;i<maxn;i++)
	{
		int a=i,b=i;
		while(a>0) {b += a % 10;a /= 10;}
		if(ans[b] == 0 || i < ans[b]) ans[b] = i;
	}
	scanf("%d",&T);
	while(T--) {
		scanf("%d",&n);
		printf("%d\n",ans[n]);
	}
	return 0;
}
