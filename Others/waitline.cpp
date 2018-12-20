#include<stdio.h>
#include<algorithm>
using namespace std;

int s[2005];
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<=2*n-1;i++)
		scanf("%d",&s[i]);
		sort(s,s+2*n);
		if(s[n-1]!=s[n])
		printf("YES\n");
		else 
		printf("NO\n");
	}
	return 0;
}
