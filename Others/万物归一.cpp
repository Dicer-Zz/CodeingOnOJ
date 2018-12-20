#include<stdio.h>
int main()
{
	int m,i;
	scanf("%d",&m);
	if(m%2 == 1)
	{m=m*3+1;
	for(i=1;m>1;i++)
	m/=2;	
	}
	else
	{for(i=0;m>1;i++)
	m/=2;	
	}
	printf("%d",i);
	return 0;
 } 
