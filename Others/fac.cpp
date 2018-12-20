#include<stdio.h>
int fac(int n){
	if(n==0)
	return 1;
	else
	return fac(n-1)*n;
}
int main()
{
	double a,e=1;
	scanf("%lf",&a);
	for(int i=1;i<a;i++)
		e+=(double)1/fac(i);  
	printf("e=%.18lf %d",e,fac(a));
	return 0;
 } 
