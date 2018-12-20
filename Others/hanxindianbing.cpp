#include<stdio.h>
int main()
{
	int a,b,c,n,cas=1;
	
	while(scanf("%d%d%d",&a,&b,&c)==3)
	{
		int  flag = 0;
		for(int i=10;i<=100;i++)
		{
			if(i%3==a && i%5==b && i%7==c)
			{
				n=i;
				flag = 1;
			}
		}
		if(!flag)
		printf("case %d:No answer\n",cas);
		else
		printf("case %d:%d\n",cas,n);
		cas++;	
	} 
	return 0;
}
