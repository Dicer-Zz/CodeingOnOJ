#include<stdio.h>
int main()
{
 	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c); 
	if(b*b-4*a*c>0)
	printf("Two");
	else if(b*b-4*a*c<0)
	printf("None");
	else
	printf("One");
	return 0;
 }  
