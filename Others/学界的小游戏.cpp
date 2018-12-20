#include<stdio.h>
#include<math.h>
int main()
{
	double  n,m;
	scanf("%lf %lf",&n,&m);
	if(2*n<=m){
	n=(2*n+m)/4;
	printf("%.0lf\n",floor(n));
	}
	else
	printf("%.0lf\n",floor(m/2));
	return 0;
}
