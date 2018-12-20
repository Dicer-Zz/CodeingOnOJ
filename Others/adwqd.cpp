#include<stdio.h>
int main()
{
	int  a,b,k;
	while(scanf("%d%d%d",&a,&b,&k)!=EOF){
		printf("%.8lf\n",(double)a/(a+b));
	}
	return 0;
 } 
