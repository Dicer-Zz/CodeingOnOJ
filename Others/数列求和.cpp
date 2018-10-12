#include<stdio.h>
#include<math.h>

int main(){
	double n,m;
	while(~scanf("%lf %lf",&n,&m)){
		double sum = 0;
		for(int i=0;i<m;i++){
			sum += n;
			n = sqrt(n);
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}
