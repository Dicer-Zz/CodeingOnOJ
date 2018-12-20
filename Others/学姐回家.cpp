#include<stdio.h>
int main()
{
	int n,a,b,p=0,max=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b); 
		p+=b-a;
		if(max<p)
		max = p;
	}
	printf("%d\n",max);
	return 0;
}
