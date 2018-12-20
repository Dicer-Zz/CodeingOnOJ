#include<stdio.h>
int main()
{
	double n;
	while(scanf("%lf",&n)!=EOF)
	printf("%.3lf\n",n*n/4);
	return 0;
}
