#include<stdio.h>
int main()
{
	int a,b,c,cas=0,i;
	while(scanf("%d%d%d",&a,&b,&c),a+b+c)
	{	
		cas++;
		printf("case %d:%d.",cas,a/b);
		a%=b;
		for(i=1;i<c;i++)
		{
			printf("%d",a*10/b);
			a = a*10%b;
		}
		if(a*10%b*10/b>5)
		printf("%d",a*10/b+1);
		else
		printf("%d",a*10/b);
	}
	return 0;
}
