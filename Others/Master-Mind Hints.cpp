#include<stdio.h>
#define Maxn 1010
int a[Maxn],b[Maxn];
int main()
{
	int count1,count2,n,game=0;
	
	while(scanf("%d",&n) == 1,n){
		for(int i=0;i<n;i++)
		scanf("%d",a[i]);
		for(int i=0;i<n;i++)
		scanf("%d",b[i]);
		for(int i=0;i<n;i++)
		{
			if(a[i]==b[i])
			count1++;
			else {
				for(int j=0;j<n;j++)
				{
				if(a[i]==b[j])
				count2++;
				}
			}
		}
		game++;
		printf("Game %d:\n(%d,%d)",game,count1,count2); 
	}
	return 0;
}
