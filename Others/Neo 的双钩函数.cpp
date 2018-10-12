#include<iostream>
#include<stdio.h>
#include<math.h> 
using namespace std;

int main(){
	double a,b;
	while(~scanf("%lf %lf",&a,&b)){
		if(a==0 && b==0)	printf("0.00\n");
		else if(a>0 && b>0)
			printf("%.2lf\n",2*sqrt(a*b));
		else	printf("No solution\n");
	}
	return 0;
} 
