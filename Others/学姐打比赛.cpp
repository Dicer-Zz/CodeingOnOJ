#include<stdio.h>
int main()
{
	int n,m,a,b,sum=0;
	scanf("%d",&n);
	while(n--)
	{
		b=0;
		for(int i=0;i<3;i++)
		{
			scanf("%d",&a);
			if(a)
			b++;
		}
		if(b>=2) 
		sum++;
	}
	printf("%d\n",sum); 
	return 0;
 } 
