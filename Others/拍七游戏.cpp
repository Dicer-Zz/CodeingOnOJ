#include<stdio.h>
int main()
{
	double n,k,m,p;
	scanf("%lf %lf %lf",&n,&k,&m);
	if(m>k)
	printf("0.000");
	else
	{
	for(p=1;m>0;n--,k--,m--)
	p*=k/n;	
	printf("%.3lf",p);	
	}
	return 0;
 } 
