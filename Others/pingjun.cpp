#include<stdio.h>
int s[105];
int main()
{
	int n,m,sum;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(int i=1;i<n+1;i++)
		s[i-1] = i*2 ;
		for(int i=0;i<n/m;i++){
			sum=0;
			for(int j=0;j<m;j++)
			{
				sum += s[i*m+j];
			}
			printf("%d ",sum/m);
		}
		if(n%m != 0)
		{
		sum = 0;
		for(int i=n/m*m;i<n;i++)
		sum += s[i]; 
		printf("%d",sum/(n-(n/m)*m));
		}
		printf("\n");
	}
	return 0;
}
