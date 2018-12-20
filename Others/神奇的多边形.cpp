#include<bits/stdc++.h>
#define pi 3.1415926535897
int main()
{
	double n;
	while(scanf("%lf",&n)!=EOF){
		printf("%.6lf\n",1/tan(pi/n)/4*n);
	}
	return 0;
}
