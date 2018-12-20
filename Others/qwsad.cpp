#include<stdio.h>
#include<algorithm>
using namespace std;
int s[10000+10];
int main()
{
	int T,n,m,max,min;
	scanf("%d",&T);
	while(T--)
	{
		max=min=0;
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&s[i]);
		}
		sort(s,s+n);
		for(int i=0;i<n;i++){
			if(i<m)
			min += s[i]*2;
			else 
			min += s[i];
		}
		for(int i=n-1;i>=0;i--){
			if(i>n-m-1)
			max += s[i]*2;
			else
			max += s[i];
		}
		printf("%d %d\n",min,max);
	}
	return 0;
 } 
