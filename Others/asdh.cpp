#include<stdio.h>
double s[105];
int main()
{
	int n,a,b,c;
	while(scanf("%d",&n),n){
	a=b=c=0;
	for(int i=0;i<n;i++)
	scanf("%lf",&s[i]);
	for(int i=0;i<n;i++)
	{
		if(s[i] < 0)
		a++;
		else if(s[i] == 0)
		b++;
		else 
		c++;
	}
	printf("%d %d %d\n",a,b,c);
	}
	return 0;
 } 
