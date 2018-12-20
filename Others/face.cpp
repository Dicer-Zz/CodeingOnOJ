#include<stdio.h>
int  fac(int  n){
	if(n==0)
	return 1;
	else 
	return fac(n-1)*n;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%lf\n",(double)1/fac(n));
	double a;
	a = fac(n);
	printf("%lf\n",1/a);
	
	
	
}
