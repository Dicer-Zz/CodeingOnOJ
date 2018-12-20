#include<stdio.h>
#include<math.h>
#define pi  acos(-1.0)

int main(){
	int t;
	double n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf",&n);
		printf("%.2lf\n",pi*n*n-sqrt(3)/4*n*n); 
		
	}
	return 0;
} 
